#include <iostream>
using namespace std;

int sumNum;
int main()
{
    int i = 1;
    while(i <= 100){
        if(i % 2 != 0)
            sumNum += i;
        i++;
    }
    cout << sumNum;
}
