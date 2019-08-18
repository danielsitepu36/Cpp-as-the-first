#include<iostream>
#include<stdio.h>
using namespace std;

void QuickSort(int *Data,int a,int b){
	int a1,b1,pivot;
	a1=a;b1=b;
	pivot=Data[(a+b)/2];
	while(!(a1>b1)){
		while(Data[a1]<pivot)a1++;
		while(Data[b1]>pivot)b1--;
		if(a1<=b1){
			Tukar(Data[a1],Data[b1]);
			a++;b1--;
		}
	}
	if(a<b1) QuickSort
}
