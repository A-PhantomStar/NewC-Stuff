#include <iostream>
using namespace std;

string cityName[10] = {"Tokyo","Paris","New York City","London","Mumbai","Cairo","Rio de Janeiro","Rome","Sydney","Cape Town"};
int cityPopu[10] = {2140526, 2870500, 4336880, 5429200, 6747815, 8550405, 9304016, 18414230, 20484965, 37400068};

int maximunPop = cityPopu[0];
int maxCityName = 0;
int main(){
    for(int i = 0; i < 10;i++){
        if (maximunPop < cityPopu[i]){
            maximunPop = cityPopu[i];
            maxCityName++;
        }
    }
cout <<"The name of the city with more population is: " << cityName[maxCityName] << endl << "And the population is: "<< maximunPop << endl;
}
