#include <iostream>
#include <algorithm>
using namespace std;

string userString;
string stringCopy;

int main()
{
    cout << "Please input a word to check if it's a palindrome" << endl << ">";
    cin >> userString;
    stringCopy = userString;

    reverse(userString.begin(), userString.end());

    if (userString == stringCopy)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}
