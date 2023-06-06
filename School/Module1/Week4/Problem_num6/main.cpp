#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

char grade;

int main()
{
    cout << "Please enter a grade (A, B, C, D, F):" << endl << ">";
    cin >> grade;

    if (grade == 'a' || grade == 'A'){
       cout << "Excellent work!";
    }
    else if (grade == 'b'|| grade == 'B'){
       cout << "Good job!";
    }
    else if (grade == 'c'|| grade == 'C'){
       cout << "Average.";
    }
    else if (grade == 'd'|| grade == 'D'){
       cout << "Needs improvement.";
    }
    else if (grade == 'f'|| grade == 'F'){
       cout << "Failing.";
    }
    else{
        cout << "Invalid input!";
    }
    return 0;
}
