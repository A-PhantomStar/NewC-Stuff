#include <iostream>
using namespace std;

string studentName[5] = {"Andres", "Jerry", "Nacho", "Octavio", "Sergio"};
float studentGrade[5] = {9.0, 9.1, 8.8, 5.3, 7.2};

int main()
{
    for(int i = 0; i < 5; i++)
        cout << studentName[i] << " " << studentGrade[i] << endl;
    return 0;
}
