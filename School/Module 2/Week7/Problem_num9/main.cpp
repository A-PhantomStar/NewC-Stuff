#include <iostream>
#include <vector>
using namespace std;
void sortArray(vector<int>& array) {
    int n = array.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> myArray = {67, 235, 23, 1, 56, 2, 6, 2, 6, 25, 26,9};
    cout << "Original array: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    sortArray(myArray);

    cout << "Sorted array: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
