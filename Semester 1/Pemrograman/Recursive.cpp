#include<iostream>
using namespace std;

int fpb(int x,int y){
	int z=x%y;
	if(z==0){
		return y;
	}
	x=y;
	y=z;
	fpb(x,y);
}

int main(){
	int x,y,t,faktor;
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
	faktor=fpb(x,y);
	cout<<"fpb="<<faktor;
	return 0;
}
