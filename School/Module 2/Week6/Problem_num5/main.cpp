#include<iostream>
using namespace std;
struct employees {
	string name;
	string id;
	int hours = 35;
	float hw;
	float pw;
}employee[6];
int main () {
	for (int i=1;i<6;i++) {
		cout<<"Name of the employee " << i << ": ";
		cin >> employee[i].name;
		cout<<"ID of the employee " << ": ";
		cin>>employee[i].id;
		cout<<"Hourly wage of the employee "<<": ";
		cin>>employee[i].hw;
		employee[i].pw=employee[i].hw*employee[i].hours;
		cout<<"\n";
	}
	for (int i=1;i<6;i++) {
		cout<<"Employee "<<i<<" name: "<<employee[i].name<<endl;
		cout<<"Employee "<<i<<" ID: "<<employee[i].id<<endl;
		cout<<"Employee "<<i<<" payroll of the week: "<<employee[i].pw<<endl<<"\n";
	}
	return 0;
}
