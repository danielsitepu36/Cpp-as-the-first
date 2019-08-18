#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	int i,k,n,dataSize,temp;
	cout<<"PROGRAM BUBBLE SORT"<<endl;
	cout<<"Masukkan Jumlah Angka = ";
	cin>>n;
	int data[n];
	dataSize=sizeof(data)/sizeof(data[0]);
	srand(time(0));
	for(int j=0;j<n;j++){
		data[j]=rand()%101;
	}
	for(int i=0;i<dataSize-1;i++){
		for(int j=0;j<dataSize-1;j++){
			if(data[j]>data[j+1]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
	}
	return 0;
}
