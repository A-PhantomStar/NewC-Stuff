#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string day;

int main()
{
    cout << "Please enter a day of the week:" << endl << ">";
    cin >> day;
    transform(day.begin(), day.end(), day.begin(), ::tolower);

    if (day == "monday" || day == "tuesday"|| day == "wednesday" || day == "thursday" || day == "friday"){
        cout << "It's a weekday!";
    }
    else if (day == "saturday" ||day == "sunday"){
        cout << "It's a weekend!";
    }
    else {
        cout << "That isn't a day of the week!";
    }
    return 0;
}
