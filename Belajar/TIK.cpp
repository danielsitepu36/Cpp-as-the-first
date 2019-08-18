#include<iostream>
using namespace std;

int main(){
	int n,i,a,total,batas,deret;
	cout<<"PROGRAM PENJUMLAHAN"<<endl;
	cout<<"Masukkan Batas = ";
	cin>>n;
	total=0;
	deret=0;
	for(i=1;i<=n;i++){
		cout<<"Masukkan angka = ";
		cin>>a;
		total=total+a;
		deret=deret+i;
	}
	cout<<"Deret = "<<deret<<endl;
	cout<<"Total = "<<total;
	return 0;
}
