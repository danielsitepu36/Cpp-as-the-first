#include <iostream>
using namespace std;

int a,b,t,x,y,z,fpb,kpk;

int main(){
	cout<<"PROGRAM MENENTUKAN KPK DAN FPB 2 BILANGAN"<<endl;
	cout<<"Masukkan biangan pertama = ";
	cin>>x;
	cout<<"Masukkan bilangan kedua = ";
	cin>>y;
	cout<<endl;
		if(y>x){
			t=y;
			y=x;
			x=t;
		}
	a=x;
	b=y;
		do{
			z=x%y;
			if (z==0){
				break;
			}
			x=y;
			y=z;
		} while(z!=0);
	fpb=y;
	kpk=(a*b)/y;
	cout<<"FPB nya adalah = "<<fpb<<endl;
	cout<<"KPK nya adalah = "<<kpk;
	return 0;
}
