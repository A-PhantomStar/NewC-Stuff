#include <iostream>
using namespace std;

float temp;

float convert(float c){return (c*1.8)+32;}

int main()
{
    cout << "Please enter the temperature in Celsius:\n>"; cin >> temp;
    cout << "The temperature in Fahrenheit is: " << convert(temp)<<"F";
    return 0;
}
