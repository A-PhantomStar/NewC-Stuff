#include <iostream>
using namespace std;
int i = 1;

int main()
{
    while(i <= 50){
        if (i % 2 == 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
