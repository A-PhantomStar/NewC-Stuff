#include <iostream>
using namespace std;

float temperatureFahrenheit; //Variable for the temperature in Fahrenheit.
double temperatureCelsius; //Variable for the temperature in Celsius.

int main()
{
    cout << "Please enter the temperature in Fahrenheit " << endl << ">"; //Asking the user for the temperature in Fahrenheit they want to convert to Celsius.
    cin >> temperatureFahrenheit;
    double temperatureCelsius = (temperatureFahrenheit - 32) * 5 / 9 ;
    /*  This is the formula to convert Fahrenheit to Celsius:
        we subtract 32 from the temperature in Fahrenheit, then we multiply the result by 5/9.
        The result from the formula is then assigned to the temperatureCelsius variable.*/
    cout << "Temperature in Fahrenheit: " << temperatureFahrenheit << endl << "Temperature in Celsius: " << temperatureCelsius; //Prints the temperature in Fahrenheit (just for reference) and in Celsius.
    return 0;
}
