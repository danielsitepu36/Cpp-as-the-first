#include<iostream>
#include<stdio.h>
#define max 9
using namespace std;

int data[10]={5,3,7,2,0,9,4,1,8,6};
int data_new[10];

void merge_sort(int low,int mid, int high){
	int l1,l2,i;
	for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=high;i++){
		if(data[l1]<=data[l2]){
			data_new[i]=data[l1++];
		}
		else{
			data_new[i]=data[l2++];
		}
	}
	while(l1<=mid){
		data_new[i++]=data[l1++];
	}
	while(l2<=high){
		data_new[i++]=data[l2++];
	}
	for(i=low;i<=high;i++){
		data[i]=data_new[i];
	}
}

void sort(int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		sort(low,mid);
		sort(mid+1,high);
		merge_sort(low,mid,high);
	}
	else{
		return;
	}
}

int main(){
	int i;
	cout<<"PROGRAM MERGE SORT"<<endl;
	cout<<"Data sebelum sorting = "<<endl;
	for(i=0;i<=max;i++){
		cout<<data[i]<<" ";
	}
	sort(0,max);
	cout<<endl<<"Data setelah sorting = "<<endl;
	for(i=0;i<=max;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	system("PAUSE");
	return 0;
}
