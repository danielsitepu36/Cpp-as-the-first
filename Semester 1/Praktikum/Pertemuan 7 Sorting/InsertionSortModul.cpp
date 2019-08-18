#include<iostream>
using namespace std;

int main(){
	int data[]={5,3,7,2,0,9,4,1,8,6};
	int i,dataSize,temp;
	dataSize=sizeof(data)/sizeof(data[0]);
	cout<<"PROGRAM INSERTION SORT"<<endl;
	cout<<"Data sebelum diurutkan = "<<endl;
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
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
	cout<<endl<<"Data setelah diurutkan = "<<endl;
	for(int j=0;j<dataSize;j++){
		cout<<data[j]<<" ";
	}
    cout<<endl;
    system("PAUSE");
	return 0;
}
