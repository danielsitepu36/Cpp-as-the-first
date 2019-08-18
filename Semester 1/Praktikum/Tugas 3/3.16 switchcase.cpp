#include<iostream>
using namespace std;

int main(){
	int input;
	cout<<"Masukkan hari ke = ";
	cin>>input;
	
	switch(input){
		case 1 : cout<<"Minggu";
		case 2 : cout<<"Senin";
		case 3 : cout<<"Selasa";
		case 4 : cout<<"Rabu";
		case 5 : cout<<"Kamis";
		case 6 : cout<<"Jumat";
		case 7 : cout<<"Sabtu";
		default : cout<<"Bukan input hari / salah masukan";
	}
	return 0;
}
