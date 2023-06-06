#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	int n,a;
	srand(time(0));
	cout<<"Guess the number"<<"\n"<<"\n";
	for (int i=1;i<=10;i++) {
		int rn=rand()%100+1;
		cout<<"Guess the number between 1 and 100: ";cin>>n;
		if (n==rn) {
			cout<<"Amazing, you are right!";
			break;
		}
		else if (n<rn) {
			cout<<"Try again. The correct number is higher than yours! :)"<<"\n";
			cout<<"The number was: "<<rn<<"\n";
		}
		if (n>rn) {
			cout<<"Try again. The correct number is lower than yours! :)"<<"\n";
			cout<<"The number was: "<<rn<<"\n";
		}
	}
	return 0;
}
