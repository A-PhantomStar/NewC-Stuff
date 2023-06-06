#include <iostream>
using namespace std;

int number;

int main()
{
    cout << "Please enter a number: " << endl << ">";
    cin >> number;

    for(int i = 1; i <= 10; i++)
        cout << number << " x " << i << " = " << number*i << endl;

    return 0;
}
