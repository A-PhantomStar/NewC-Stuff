#include <iostream>
using namespace std;


int age;

int main()
{
    cout << "Please enter your age." << endl << ">";
    cin >> age;

    if (age < 18){
        cout << "You are not old enough to vote!";
    }
    else{
        cout << "You are old enough to vote!";
    }
    return 0;
}
