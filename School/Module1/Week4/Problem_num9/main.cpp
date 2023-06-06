#include <iostream>
using namespace std;

int year;

int main()
{
    cout << "Please enter a year:" << endl << ">";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "Leap year!";
    }
    else
    {
        cout << "Not a leap year!";
    }

}
