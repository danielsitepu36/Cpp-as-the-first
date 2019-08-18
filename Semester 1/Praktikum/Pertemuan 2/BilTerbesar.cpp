#include <iostream>
#include <math.h>
using namespace std;

int a,b,c,besar;

int main(){
	cout<<"PROGRAM MENENTUKAN BILANGAN TERBESAR"<<endl;
	cout<<"Masukkan Bilangan 1 = ";
	cin>>a;
	cout<<"Masukkan Bilangan 2 = ";
	cin>>b;
	cout<<"Masukkan Bilangan 3 = ";
	cin>>c;
	besar=a;
	if(b>a){
		besar=b;
	}
	if(c>besar){
		besar=c;
	}
	cout<<"Bilangan terbesar adalah = "<<besar;
	return 0;
}
