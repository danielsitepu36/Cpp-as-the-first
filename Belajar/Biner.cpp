#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	awal:
	long unsigned a=0;
	int b=0,c=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0,z=32;
	int x[32];

	system ("CLS");
	cout<<"PROGRAM MENGUBAH BILANGAN BASIS 10 KE BASIS 2 / BINER"<<endl;
	cout<<"Pilih Program yang Anda Inginkan :"<<endl;
	cout<<"1)Biner ke Basis 10"<<endl;
	cout<<"2)Basis 10 ke Biner"<<endl;
	cout<<"3)Keluar Program"<<endl;
	cout<<"Masukkan Pilihan Anda = ";
	cin>>p;
	cout<<endl;
	switch(p){
		case 1 : goto Biner;
		case 2 : goto Basis10;
		default : 
			cout<<"Terima Kasih";
			return 0;
	}
	
	Biner:
	cout<<"Masukkan Angka Anda = ";
	cin>>a;
	while (a>9){
		b=a/10;
		c=a%10;
		c=c;
		x[i]=c;
		i=i++;
		a=b;
	}
	x[i]=a;
	
	z=0;
	for(z=0;z<=i;z++){
		k=(x[z]);
		l=pow(2,z);
		m=k*l;
		n=n+m;
	}
	cout<<"Bilangan Basis 10 nya = "<<n<<endl;
	system("PAUSE");
	goto awal;
		
	Basis10:
	cout<<"Masukkan Angka Anda = ";
	cin>>a;
	do {		
		b=a/2;
		c=a%2;
		c=c;	
		x[i]=c;
		i=i+1;
		a=b;
	} while (b!=1);
	x[i]=1;
	
	z=i;
	for(z;z>=0;z--){
		cout<<x[z];
		if(z%4==0){
			cout<<" ";
		}
		
	}
	system("PAUSE");
	goto awal;
}
