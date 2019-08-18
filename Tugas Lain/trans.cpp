#include<iostream>
using namespace std;

int main(){
	int x=6, y=3;
	cout<<"PROGRAM MENENTUKAN TRANSPOSE"<<endl;
	int a[x][y];
	int i,j;
	
	cout<<"Masukkan Matriks Anda ="<<endl;	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Transpose matriks anda ="<<endl;
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			cout<<a[j][i];
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
