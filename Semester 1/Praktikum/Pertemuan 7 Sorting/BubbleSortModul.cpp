#include<iostream>
using namespace std;

int main(){
	int data[]={5,3,7,2,0,9,4,1,8,6};
	int i,dataSize,temp;
	dataSize=sizeof(data)/sizeof(data[0]);
	cout<<"PROGRAM BUBBLE SORT"<<endl;
	cout<<"Data sebelum diurutkan = "<<endl;
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
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
	cout<<endl<<"Data setelah diurutkan = "<<endl;
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
	}
    cout<<endl;
    system("PAUSE");
	return 0;
}
