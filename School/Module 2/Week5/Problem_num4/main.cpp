#include <iostream>
using namespace std;

int num1 = 0;
int num2 = 1;
int numTerms;
int nextTerm;

int main()
{
    cout << "Please enter a number:" << endl << ">";
    cin >> numTerms;

    for (int i = 0; i < numTerms; ++i) {
        cout << num1 << " ";
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        cout << endl;
    }
    return 0;
}
