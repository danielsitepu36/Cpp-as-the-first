/*Tugas 1 : Buat Program Volume Tabung*/
#include <iostream>
using namespace std;

int r, t;
float volume;

int main (){
	cout<<"PROGRAM MENGHITUNG VOLUME TABUNG"<<endl;
	cout<<"Masukkan jari-jari alas tabung = ";
	cin>>r;
	cout<<"Masukkan tinggi tabung = ";
	cin>>t;
	volume=r*r*3.14*t;
	cout<<"Volume tabung tersebut adalah = "<<volume;
	return 0;
}
