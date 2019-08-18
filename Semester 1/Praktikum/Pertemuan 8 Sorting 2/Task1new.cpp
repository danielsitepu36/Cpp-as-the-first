#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int data[1000];
int data_new[1000];

void merge_sort(int low,int mid, int high);

void sort(int low,int high);

int partition(int *data, const int left, const int right);

void quicksort(int *data, const int left, const int right, const int sz);

int main(){
	int i,k,n,dataSize,temp,m,min,tampilan;
	char a;
	cout<<"PROGRAM SORT"<<endl;
	
	awal:
	cout<<endl<<"Masukkan Jumlah Angka = ";
	cin>>n;
	dataSize=sizeof(data)/sizeof(data[0]);
	cout<<"Masukkan Angka anda = "<<endl;
	for(int j=0;j<n;j++){
		cin>>data[j];
	}
	
	menu:
	cout<<endl<<"Menu Sorting : "<<endl;
	cout<<"1) Insertion Sort"<<endl;
	cout<<"2) Selection Sort"<<endl;
	cout<<"3) Bubble Sort"<<endl;
	cout<<"4) Merge Sort"<<endl;
    cout<<"5) Quick Sort"<<endl;
	cout<<"6) Keluar"<<endl;
	cout<<"Masukkan Pilihan anda = ";
	cin>>m;
	if(m==6){
		cout<<"Terima Kasih !";
		goto exit;
	}
	cout<<endl<<"Menu Tampilan : "<<endl;
	cout<<"1) Ascending"<<endl;
	cout<<"2) Descending"<<endl;
	cout<<"Masukkan Pilihan anda = ";
	cin>>tampilan;
	if(m==1){
		goto insertion;
	}
	else if(m==2){
		goto selection;
	}
	else if(m==3){
		goto bubble;
	}
	else if(m==4){
		goto merge;
	}
	else if(m==5){
		goto quick;
	}
	else{
		cout<<"Pilihan salah !";
		goto menu;
	}
	
	insertion:
	for(int j=1;j<n;j++){
		i=j-1;
		temp=data[j];
		while(data[i]>temp && i>=0){
			data[i+1]=data[i];
			i--;
		}
		data[i+1]=temp;
	}
	goto show;
	
	selection:
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(data[j]<data[min]){
				min=j;
			}
		}
		temp=data[i];
		data[i]=data[min];
		data[min]=temp;
	}
	goto show;
	
	bubble:
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(data[j]>data[j+1]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	goto show;
		
	merge:
	    sort(0,n-1);
	goto show;

    quick:
        quicksort(data,0,n-1,n);
    goto show;
	
	show:
	cout<<endl<<"Hasil = "<<endl;
	if(tampilan==1){
		for(int j=0;j<n;j++){
			cout<<data[j]<<" ";
		}
	}
	if(tampilan==2){
		for(int j=n-1;j>=0;j--){
			cout<<data[j]<<" ";
		}
	}
	cout<<endl<<"Ingin Mengulang Program ?(Y/N)"<<endl;
	cin>>a;
	if(a=='Y'){
			cout<<endl<<"Ingin Mengganti Angka ?(Y/N)"<<endl;
		cin>>a;
		if(a=='Y'){
			goto awal;
		}
		else{
			goto menu;
		}
	}
	else{
		goto exit;
	}
	
	exit:
    cout<<endl;
    system("PAUSE");
	return 0;
}

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

void print(int *a, int n){
    int i=0;
    while(i<n){
        std::cout<<a[i]<<", ";
        i++;
    }
    std::cout<<"\n";
}

int partition(int *data, const int left, const int right){
    const int mid=left+(right-left)/2;
    const int pivot=data[mid];

    std::swap(data[mid],data[left]);
    int i=left+1;
    int j=right;
    while(i<=j){
        while(i<=j && data[i]<=pivot){
            i++;
        }
        while(i<=j && data[j]>pivot){
            j--;
        }
        if(i<j){
            std::swap(data[i],data[j]);
        }
    }
    std::swap(data[i-1],data[left]);
    return i-1;
}

void quicksort(int *data, const int left, const int right, const int sz){
        if(left>=right){
            return;
        }
        int part = partition(data,left,right);
        std::cout<<"Quick Sort : "<<left<<", "<<right<<" part = "<<part<<"\n";
        print(data, sz);

        quicksort(data,left,part-1,sz);
        quicksort(data,part+1,right,sz);
}