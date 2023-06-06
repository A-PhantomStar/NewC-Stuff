#include <iostream>
using namespace std;

string userString;
string stringReversed;

int main()
{
    cout << "Please input a string to reverse." << endl << ">"; //Ask the user for a word.
    getline(cin, userString);

    for(int i = userString.length() - 1 ; i > 0; i--){
    stringReversed += userString[i];
    }
    cout << endl << stringReversed;
}
