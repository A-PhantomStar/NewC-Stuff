#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string userString;

int main()
{
    cout << "Enter your text." << endl << ">";
    getline(cin, userString);
    transform(userString.begin(), userString.end(), userString.begin(), ::tolower);

    for(int i = 0; i < userString.length(); i++){

        if(i == 0){
            userString[i] = ::toupper(userString[i]);
        }
        else if(userString[i] ==' ' && userString[i+1] != ' '){
            userString[i+1] = ::toupper(userString[i+1]);
        }
    }

    cout << endl << userString;
    return 0;
}
