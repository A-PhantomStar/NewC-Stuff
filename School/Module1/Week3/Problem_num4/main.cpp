#include <iostream>
#include <string>
using namespace std;

string userString;
int numVowels;

int main()
{
    cout << "Please type a word" << endl << ">";
    getline(cin, userString);
    cout << endl;
    for(int i = 0; i < userString.length();i++){
        if(userString[i] == 'a' || userString[i] == 'e' || userString[i] == 'i' || userString[i] == 'o' || userString[i] == 'u' || userString[i] == 'A' || userString[i] == 'E' || userString[i] == 'I' || userString[i] == 'O' || userString[i] == 'U'){
            numVowels++;

        }
        else{
            continue;
        }
    }
    cout << "Number of vowels: " << numVowels;
    return 0;
}
