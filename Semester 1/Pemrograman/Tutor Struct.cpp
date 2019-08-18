#include<iostream>
using namespace std;
struct name{
	string depan;
	string belakang;
};

struct nomor{
	int angkatan;
	int niu;
	string fakultas;
	int nif;
};

struct mahasiswa{
	name nama;
	nomor nim;
	int umur;
	float ipk;	
};

mahasiswa kelasA;
int pilih;

int main(){
	cout<<"PROGRAM DATA MAHASISWA"<<endl;
	cout<<"Masukkan nama depan mahasiswa pertama		: ";
	cin>>kelasA.nama.depan;
	cout<<"Masukkan nama belakang mahasiswa pertama	: ";
	cin>>kelasA.nama.belakang;
	cout<<"Masukkan umur mahasiswa pertama			: ";
	cin>>kelasA.umur;
	cout<<"Masukkan ipk mahasiswa pertama			: ";
	cin>>kelasA.ipk;
	cout<<"---------------------------------"<<endl;
	cout<<"Nama mahasiswa 	= "<<kelasA.nama.depan<<" "<<kelasA.nama.belakang<<endl;
	cout<<"Umur mahasiswa 	= "<<kelasA.umur<<endl;
	cout<<"IPK mahasiswa 	= "<<kelasA.ipk;
	return 0;
}
