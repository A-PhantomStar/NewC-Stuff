#include <iostream>
using namespace std;

int number;

int main()
{
    cout << "Please enter a number:" << endl << ">";
    cin >> number;
    if (number < 0){
        cout << "The number is negative!";
    }
    else if (number > 0){
        cout << "The number is positive!";
    }
    else{
        cout << "The number is zero!";
    }
    return 0;
}
