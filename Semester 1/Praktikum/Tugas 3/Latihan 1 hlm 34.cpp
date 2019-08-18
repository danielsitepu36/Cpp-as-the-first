#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout<<"PROGRAM KONVERSI NILAI ANGKA KE HURUF"<<endl;
	cout<<"Masukkan nilai = ";
	cin>>nilai;
	if(nilai>=85 && nilai<=100){
		cout<<"A";
	}
	else if(nilai>=70 && nilai<85){
		cout<<"B";
	}
	else if(nilai>=40 && nilai<70){
		cout<<"C";
	}
	else if(nilai>0 && nilai<40){
		cout<<"D";
	}
	else{
		cout<<"E";
	}
	return 0;
}
