#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int n,jumlah,a;
int i;

int main(){
	cout<<"PROGRAM PENJUMLAHAN ANGKA"<<endl;
	cout<<"Masukkan jumlah angka yang akan dijumlahkan = ";
	cin>>n;
	int x[]={n};
	i=0;
	while(i<n){
		cout<<"Masukkan angka ke-"<<i<<" = ";
		cin>>a;
		x[i]=a;
		i++;
	}
	for(i=0;i<n;i++){
		jumlah=jumlah+x[i];
	}
	cout<<"Jumlahnya ="<<jumlah<<endl;
	cout<<"Terima Kasih";
}
