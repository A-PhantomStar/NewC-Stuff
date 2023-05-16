#include <iostream>
using namespace std;

string userString;
string stringResoult;

int main()
{
    cout << "Please input a string." << endl << ">"; //Ask the user for a word.
    getline(cin, userString);

    for(int i = 0; i < userString.length(); i++){

    if(userString[i] == ' '){
        continue;
    }
    else{
        stringResoult += userString[i];
    }
    }
    cout << endl << stringResoult;
}
