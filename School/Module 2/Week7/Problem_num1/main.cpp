#include <iostream>
using namespace std;
float x, y = 0;
float area(float length, float width){return length*width;}

main(){
    cout << "Please enter the length of the square:\n>"; cin >> x;
    cout << "Please enter the width of the square:\n>"; cin >> y;
    cout << "The area of the square is " << area(x,y);
}



