#include<iostream>
using namespace std;

int main(){
	int x, y;
	cout<<"PROGRAM MENENTUKAN TRANSPOSE"<<endl;
	cout<<"Masukkan jumlah kolom (x) matriks = ";
	cin>>x;
	cout<<"Masukkan jumlah baris (y) matriks = ";
	cin>>y;
	int a[x][y];
	int i,j;
	cout<<"Bentuk matriks yang harus diinput ="<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<"X "<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Masukkan Matriks Anda ="<<endl;	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Matriks yang diinput ="<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(a[i][j]<10){
				cout<<" "<<a[i][j];
			}
			else{
				cout<<a[i][j];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Transpose matriks anda ="<<endl;
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			if(a[j][i]<10){
				cout<<" "<<a[j][i];
			}
			else{
				cout<<a[j][i];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
