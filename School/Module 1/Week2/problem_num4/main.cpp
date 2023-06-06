#include <iostream>
using namespace std;

float radiusSphere; //Variable for the radius of the sphere.
float volumeSphere; //Variable for the volume of the sphere.

int main()
{
    cout << "Please enter the radius from the sphere:" << endl << ">"; //Ask the user for the radius of the sphere.
    cin >> radiusSphere;
    float volumeSphere = (4 * 3.1416 * (radiusSphere*radiusSphere*radiusSphere))/3;
    /*  This is the formula to get the volume of the sphere:
        We multiply 4/3 by pi (3.1416) by radius cube.
        The result is then assigned to the volumeSphere variable.
    */
    cout << "The volume from of the sphere is: " << volumeSphere; //Prints the volume of the sphere.
    return 0;
}
