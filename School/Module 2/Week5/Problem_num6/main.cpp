#include<iostream>
using namespace std;
int main() {
	cout<<"Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz for multiples of both"<<"\n"<<"\n";
	for(int i=0;i<101;i++) {
		if (i%3==0 && i%5==0) {
		cout<<"FizzBuzz ";
		} 
		else if (i%3==0) {
			cout<<"Fizz ";
		}
		else if (i%5==0) {
			cout<<"Buzz ";
		}
		cout<<i<<"\n";
	}
	return 0;
}
