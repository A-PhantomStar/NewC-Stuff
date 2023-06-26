#include <iostream>
using namespace std;
float result;
float numbers[5];
int main() {

    cout << "Enter 5 numbers: \n>";

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }
  result = (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4])/5;
  cout << "The average of the number is: " << result;
}
