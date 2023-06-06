#include <iostream>
using namespace std;

char letter;

int main()
{
    cout << "Please type a letter" << endl << ">";
    cin >> letter;

    if (letter == 'a' ||letter == 'A' ||letter == 'e' ||letter == 'E' ||letter == 'i' ||letter == 'I' ||letter == 'o' ||letter == 'O' ||letter == 'u' ||letter == 'U'){
        cout << "The letter is a vowel!";
    }
    else {
        cout << "The letter is a consonant";
    }
    return 0;
}
