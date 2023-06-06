#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
float xNum1;
float xNum2;
float yNum1;
float yNum2;
float distanceResoult;
float squareNum = 2;

int main()
{
    cout << "Please enter the value of x1" << endl << ">";
    cin >> xNum1;
    cout << endl << "Please enter the value of y1" << endl << ">";
    cin >> yNum1;
    cout << endl << "Please enter the value of x2" << endl << ">";
    cin >> xNum2;
    cout << endl << "Please enter the value of y2" << endl << ">";
    cin >> yNum2;

    distanceResoult = sqrt(pow(xNum2 - xNum1, squareNum)+pow(yNum2-yNum1, squareNum));

    cout << endl << "The distance between the two points is: " << distanceResoult;



    return 0;
}
