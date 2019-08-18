#include<iostream>
using namespace std;

int array(int a, int b){
	return a*b;
}

int main(){
	int a,i;
	cout<<"Masukkan ukuran Array = ";
	cin>>a;
	int X1[a];
	int X2[a];
	cout<<"Masukkan angka Array 1 ="<<endl;
	for(i=0;i<a;i++){
		cin>>X1[i];
	}
	cout<<"Masukkan angka Array 2 ="<<endl;
	for(i=0;i<a;i++){
		cin>>X2[i];
	}
	cout<<"Hasil = "<<endl;
	for(i=0;i<a;i++){
		cout<<array(X1[i],X2[i])<<" ";
	}
	return 0;
}
