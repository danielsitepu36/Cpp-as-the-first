#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	int i,n,dataSize,temp;
	cout<<"PROGRAM INSERTION SORT"<<endl;
	cout<<"Masukkan Jumlah Angka = ";
	cin>>n;
	int data[n];
	dataSize=sizeof(data)/sizeof(data[0]);
	srand(time(0));
	for(int j=0;j<n;j++){
		data[j]=rand()%101;
	}
	for(int j=1;j<dataSize;j++){
		i=j-1;
		temp=data[j];
		while(data[i]>temp && i>=0){
			data[i+1]=data[i];
			i--;
		}
		data[i+1]=temp;
	}
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
	}
	return 0;
}
