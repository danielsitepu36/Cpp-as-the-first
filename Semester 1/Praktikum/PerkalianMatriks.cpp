#include<iostream>
#include<iomanip>
using namespace std;

int kali(int a, int b){
	return a*b;
}

int main(){
	int x, y;
	cout<<"PROGRAM PERKALIAN MATRIKS"<<endl;
	cout<<"Masukkan jumlah kolom (x) matriks = ";
	cin>>x;
	cout<<"Masukkan jumlah baris (y) matriks = ";
	cin>>y;
	int a[x][y];
	int b[x][y];
	int i,j;
	cout<<"Bentuk matriks yang harus diinput ="<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<"X "<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Masukkan Matriks 1 Anda ="<<endl;	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Masukkan Matriks 2 Anda ="<<endl;	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cin>>b[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Matriks 1 yang diinput ="<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<setw(3)<<a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Matriks 2 yang diinput ="<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<setw(3)<<b[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Hasil kali matriks ="<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<setw(3)<<kali(a[i][j],b[i][j]);
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	return 0;
}
