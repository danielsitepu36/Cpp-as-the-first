#include <iostream>
#include <string>
using namespace std;

string nama,nim,alamat;

int main(){
	cout<<"PROGRAM DATA DIRI"<<endl;
	cout<<"Masukkan Nama anda : ";
	getline(cin,nama);
	cout<<endl<<"Masukkan NIM anda : ";
	getline(cin,nim);
	cout<<endl<<"Masukkan Alamat anda : ";
	getline(cin,alamat);
	cout<<endl;

	cout<<"Data Diri Anda Yaitu :"<<endl;
	cout<<"Nama		: ";
	cout<<nama<<endl;
	cout<<"NIM		: ";
	cout<<nim<<endl;
	cout<<"Alamat		: ";
	cout<<alamat<<endl;
	
	return 0;
}
