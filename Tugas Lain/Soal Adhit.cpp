#include <iostream>
using namespace std;

int a=4,b=2,c=2,d=1,x,y,z;

int main(){
	x=(a+b)*c-(d++);
	y=x/(a-b*c+d);
	if (y%3==0){
		z=(x++)+d*y;
	}
	else
	z=(++x)-d*y;
	x=z-y+2;
	
	cout<<"a="<<a<<"b="<<b<<"c="<<c<<"d="<<d<<"x="<<x<<"y="<<y<<"z="<<z;
}
