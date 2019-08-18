#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

long a=0;
int b=0,c=0,i=0,k=0,z=32;
int x[32];

int main(){
	cout<<"Program Pembalik Digit"<<endl;
	cout<<"Masukkan Angka Anda = ";
	cin>>a;
	while (a>9){		
		b=a/10;
		c=a%10;
		c=c;
		x[i]=c;
		i=i+1;
		a=b;
	}
	x[i]=a;

	cout<<"Bilangan Baliknya = ";
	z=0;
	for(z=0;z<=i;z++){
		k=(x[z]);
		cout<<k;
	}
}
