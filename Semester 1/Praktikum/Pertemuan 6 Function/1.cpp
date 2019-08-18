#include<iostream>
using namespace std;
const int PI=3.14159265;

//function prototype
double getArea(double radius);

int main(){
	double radius1 = 1.1,area1, area2;
	area1=getArea(radius1);
	cout<<"Area 1 is "<<area1<<endl;
	area2=getArea(2.2);
	cout<<"Area 2 is "<<area2<<endl;
	cout<<"Area 3 is "<<getArea(3.3)<<endl;
}

double getArea(double radius){
	return radius*radius*PI;
}
