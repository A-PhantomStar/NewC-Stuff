#include <iostream>
#include <string>
using namespace std;

struct {
    string carMake;
    string carModel;
    string carYear;
}cars[5];

int main(){
    for(int i = 0; i < 5; i++){
        cout << "Enter the make of car number" << i + 1<< endl << ">";
        getline(cin, cars[i].carMake);
        cout << "Enter the model of the car:" << endl << ">";
        getline(cin, cars[i].carModel);
        cout << "Enter the year of the car:" << endl << ">";
        getline(cin, cars[i].carYear);
    }
    for(int v = 0; v < 5; v++)
        cout << endl << "Car number " << v + 1 << endl << "Make: " << cars[v].carMake << endl << "Model: " << cars[v].carModel << endl << "Year: " << cars[v].carYear << endl;
    return 0;
}
