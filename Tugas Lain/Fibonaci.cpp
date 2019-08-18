#include <iostream>
using namespace std;

int main(){
	int n,m,i,jumlah,j,k,z;
	cout<<"PROGRAM FIBONACI"<<endl;
	cout<<"Masukkan bilangan = ";
	cin>>n;
	int x[n];
	x[0]=1;
	x[1]=1;
	i=2;
	jumlah=2;
	while(jumlah<n){
		m=x[i-1]+x[i-2];
		x[i]=m;
		i++;
		if((jumlah+m)>n){
			break;
		}
		jumlah=jumlah+m;
	}
	j=i-2;
	cout<<"Bilangan Fibonaci = "<<endl;
	for(k=0;k<=j;k++){
		cout<<x[k]<<" ";
	}
	cout<<endl<<"Jumlah = "<<jumlah;
	return 0;
}
