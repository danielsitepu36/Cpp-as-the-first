#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	int i,n,dataSize,temp,min;
	cout<<"PROGRAM SELECTION SORT"<<endl;
	cout<<"Masukkan Jumlah Angka = ";
	cin>>n;
	int data[n];
	dataSize=sizeof(data)/sizeof(data[0]);
	srand(time(0));
	for(int j=0;j<n;j++){
		data[j]=rand()%101;
	}
	for(int i=0;i<dataSize-1;i++){
		min=i;
		for(int j=i+1;j<dataSize;j++){
			if(data[j]<data[min]){
				min=j;
			}
		}
		temp=data[i];
		data[i]=data[min];
		data[min]=temp;
	}
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
	}
	return 0;
}
