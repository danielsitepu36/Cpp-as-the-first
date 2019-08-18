#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	long unsigned a=0;
	int b=0,c=0,i=0,z=32;
	int x[32];

	cout<<"PROGRAM MENGUBAH BILANGAN BASIS 10 BINER"<<endl;
	cout<<"Masukkan Angka Anda = ";
	cin>>a;
	do {		
		b=a/2;
		c=a%2;	
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
	return 0;
}
