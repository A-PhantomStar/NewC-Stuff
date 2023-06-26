#include<iostream>
#include<cmath>
using namespace std;
float area(float radius){return (3.1416*pow(radius,2));
}
int radius1;
int main(){
	cout<<"Enter the radius of the circle: \n>";cin>>radius1;
	cout<<"The area of the circle is: \n>"<<area(radius1);
	return 0;
}
