#include <iostream>
using namespace std;

void check();
int number;

int main()
{
    cout << "Enter a number:\n>"; cin >> number;
    check();
    return 0;
}

void check(){
    if (number % 2 == 0){
         cout << "The number is even!";
    }
    else{
        cout << "The number is odd!";
    }
}
