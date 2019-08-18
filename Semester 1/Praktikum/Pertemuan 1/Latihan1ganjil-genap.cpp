#include <iostream>
using namespace std;

int x;
int y;

int main (){
	cout<<"PROGRAM MENENTUKAN ANGKA GANJIL GENAP"<<endl;
	cout<<"Masukkan Angka = ";
	cin>>x;
	y=x%2;
	if(y==1){
		cout<<"Angka tersebut adalah angka ganjil";
	}
	else if (y==0){
		cout<<"Angka tersebut adalah angka genap";
	}
	return 0;
}
