#include <iostream>
#include <math.h>
using namespace std;

int a,b,c,D,x1,x2 ;

int main (){
	cout<<"PROGRAM MENENTUKAN DETERMINAN DAN AKAR PERSAMAAN KUADRAT"<<endl;
	cout<<"Masukkan koefisien x kuadrat = a = ";
	cin>>a;
	cout<<"Masukkan koefisien x = b = ";
	cin>>b;
	cout<<"Masukkan koefisien c = ";
	cin>>c;
	D=(b*b)-(4*a*c);
	if (D>0){
		x1=((-b)+sqrt(D))/2*a;
		x2=((-b)-sqrt(D))/2*a;
		cout<<"Akar-akarnya yaitu = "<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2;
		return 0;
	}
	else if (D==0){
		x1=(-b+sqrt(D))/2*a;
		cout<<"Akar-akarnya real dan sama, yaitu = "<<x1;
		return 0;
	}
	else {
		cout<<"Akar-akar nya imajiner";
		return 0;
	}
}
