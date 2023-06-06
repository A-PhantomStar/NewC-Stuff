#include <iostream>
using namespace std;

float length; //Variable for the length of the rectangle.
float height; //Variable for the height of the rectangle.
float areaResult; //Variable for the area of the rectangle.

int main()
{
    cout << "Please enter the length of the rectangle" << endl << ">"; //Asking the user for the length of the rectangle.
    cin >> length;
    cout << "Please enter the height of the rectangle" << endl << ">"; //Asking the user for the height of the rectangle.
    cin >> height;
    float areaResult = length * height; //This calculates the area using the formula: it multiplies the length by the height. Then the result is assigned to the areaResult variable.
    cout << "The are of the rectangle is " << areaResult; //Prints the area from the rectangle.
    return 0;
}
