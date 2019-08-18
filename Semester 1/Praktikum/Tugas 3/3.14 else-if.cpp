#include<iostream>
using namespace std;

int main(){
	int input;
	cout<<"Masukkan hari ke = ";
	cin>>input;
	
	if(input==1){
		cout<<"Anda memasukkan hari Minggu";
	}
	else if(input==2){
		cout<<"Anda memasukkan hari Senin";
	}
	else if(input==3){
		cout<<"Anda memasukkan hari Selasa";
	}
	else if(input==4){
		cout<<"Anda memasukkan hari Rabu";
	}
	else if(input==5){
		cout<<"Anda memasukkan hari Kamis";
	}
	else if(input==6){
		cout<<"Anda memasukkan hari Jumat";
	}
	else if(input==7){
		cout<<"Anda memasukkan hari Sabtu";
	}
	else{
		cout<<"Bukan input hari / salah masukan";
	}
	return 0;
}
