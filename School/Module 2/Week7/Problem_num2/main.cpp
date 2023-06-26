#include <iostream>
using namespace std;
float x, y = 0;
float z = 3.1416;
float volume(float radius, float height, float pi){return pi*(radius*radius)*height;}

main(){
    cout << "Please enter the radius of the cylinder:\n>"; cin >> x;
    cout << "Please enter the height of the cylinder:\n>"; cin >> y;
    cout << "The volume of the cylinder is " << volume(x,y,z);
    return 0;
}



