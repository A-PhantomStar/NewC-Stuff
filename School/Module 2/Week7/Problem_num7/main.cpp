#include <iostream>
using namespace std;
int fact(int x);
int number = 0; int finNum = 1;

int main()
{
    cout << "Enter a number:\n>"; cin >> number;
    cout << "The factorial number of " << number << " is: " << fact(number);
    return 0;
}

int fact(int x){
    for(int i=1; i<=x; i++)
        finNum = finNum * i;
    return finNum;
}
