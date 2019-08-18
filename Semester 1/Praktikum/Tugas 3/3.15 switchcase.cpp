#include<iostream>
using namespace std;

int main(){
	int input;
	cout<<"Masukkan hari ke = ";
	cin>>input;
	
	switch(input){
		case 1: cout<<"Minggu";
		break;
		case 2: cout<<"Senin";
		break;
		case 3: cout<<"Selasa";
		break;
		case 4: cout<<"Rabu";
		break;
		case 5: cout<<"Kamis";
		break;
		case 6: cout<<"Jumat";
		break;
		case 7: cout<<"Sabtu";
		break;
		default : cout<<"Bukan input hari / salah masukan";
		break;
	}
	return 0;
}
