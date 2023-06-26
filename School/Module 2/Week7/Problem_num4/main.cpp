#include <iostream>
using namespace std;

int x,y;
int add(int n1,int n2){return n1+n2;}

int main()
{
    cout << "Enter the first number:\n>"; cin >> x;
    cout << "Enter the second number:\n>"; cin >> y;
    cout << "The sum of the two numbers is: " << add(x,y);
    return 0;
}
