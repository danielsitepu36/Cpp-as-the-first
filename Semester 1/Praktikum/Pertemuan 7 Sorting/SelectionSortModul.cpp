#include<iostream>
using namespace std;

int main(){
	int data[]={5,3,7,2,0,9,4,1,8,6};
	int i,dataSize,temp,min;
	dataSize=sizeof(data)/sizeof(data[0]);
	cout<<"PROGRAM SELECTION SORT"<<endl;
	cout<<"Data sebelum diurutkan = "<<endl;
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
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
	cout<<endl<<"Data setelah diurutkan = "<<endl;
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
	}
    cout<<endl;
    system("PAUSE");
	return 0;
}
