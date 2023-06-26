#include<iostream>
#include<cmath>
using namespace std;
float distance(int x1,int x2, int y1, int y2){return sqrt(pow(x2-x1,2)+pow(y2-y1,2));}
int x11,x21,y11,y21;
int main(){
	cout<<"Where is the x1 coordinate? \n>"; cin>>x11;
	cout<<"Where is the y1 coordinate? \n>"; cin>>y11;
	cout<<"Where is the x2 coordinate? \n>"; cin>>x21;
	cout<<"Where is the y2 coordinate? \n>"; cin>>y21;
	cout<<"The distance between these two points is: "<<distance(x11,x21,y11,y21);
	return 0;
}
