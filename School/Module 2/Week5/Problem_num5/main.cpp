#include<iostream>
using namespace std;

int main() {
	int n=7;
	int userN = 0;
	cout<<"Guess the number"<<"\n"<<"\n";

	while (userN<=10) {
		cout<<"Guess a number between 1-10: ";
		cin>>userN;
		if (userN==n) {
			cout<<"You are right!";
			break;
		}
		cout<<"Try again please" <<endl;
			continue;
	}

	return 0;
}
