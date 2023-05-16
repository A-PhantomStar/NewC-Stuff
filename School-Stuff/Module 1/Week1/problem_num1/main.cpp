#include <iostream>
using namespace std;

string userName; //Variable for the user name.
int userAge; //Variable for the user age.

int main()
{
    cout << "Please type your name "; //Prints a question for the user asking for their name.
    cin >> userName;
    cout << "Please enter your age "; //Prints a question for the user asking for their age.
    cin >> userAge;
    cout << "Hello " << userName << "!" << endl; //Prints the name of the user
    cout << "your age is " << userAge << endl; //Prints the age from the user.
    return 0;
}
