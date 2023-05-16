#include <iostream>
using namespace std;

float kilometers; //Variable for the kilometers value.
float miles;  //Variable for the miles value

int main()
{
    cout << "Please enter the value in kilometers:" << endl << ">";  //Ask the user for a value in kilometers they want to convert to miles.
    cin >> kilometers;
    float miles = kilometers * 0.621371;
    /*
     Formula to convert kilometers to miles:
     We multiply kilometers by 0.621371.
     The result is the assigned to the miles variable.
    */
    cout << "Kilometers: " << kilometers << endl << "Miles: " << miles;
    return 0;
}
