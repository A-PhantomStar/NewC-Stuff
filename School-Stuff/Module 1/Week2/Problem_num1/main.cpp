#include <iostream>
using namespace std;

/*
    This program calculates the perimeter of a triangle.
    The user is asked to input the value of all sides of the triangle.
*/
int sideA; //Variable for the side A.
int sideB; //Variable for the side B.
int sideC; //Variable for the side C.
int perimeter; //The value of the perimeter.

int main()
{
    cout << "Hello!" << endl << "Please enter the value of side A: "<< endl << ">"; //Ask the user for the side A value.
    cin >> sideA;
    cout << "Now enter the value of side B: "<< endl << ">"; //Ask the user for the side B value.
    cin >> sideB;
    cout << "Finally, enter the value of side C: "<< endl << ">"; //Ask the user for the side C value.
    cin >> sideC;
    perimeter = sideA + sideB + sideC; //Formula to get the perimeter, this sums the values of all sides.
    cout << endl << "The perimeter of the triangle is: " << endl << perimeter << " u"; //Prints the perimeter.

    return 0;
}
