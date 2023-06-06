#include<iostream>
using namespace std;
int main() {
	cout<<"Sum of positive numbers"<<"\n"<<"\n";
	int n,s; //n=number; s=sum
	while (true) {
		cout<<"Type a number: ";cin>>n;
		if (n>0) {
			s+=n;
		}
		if (n<0) {
		cout<<"The sum of the positive numbers is: "<<s;
		break;
		}
	}
	return 0;
}
