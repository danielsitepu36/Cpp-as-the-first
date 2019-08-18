#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int umur;
	float ipk;	
};

mahasiswa kelasA[6];
int pilih;

int main(){
	cout<<"PROGRAM DATA MAHASISWA"<<endl;
	cout<<"Masukkan nama mahasiswa pertama	: ";
	cin>>kelasA[0].nama;
	cout<<"Masukkan umur mahasiswa pertama	: ";
	cin>>kelasA[0].umur;
	cout<<"Masukkan ipk mahasiswa pertama	: ";
	cin>>kelasA[0].ipk;
	cout<<"---------------------------------"<<endl;
	cout<<"Masukkan nama mahasiswa kedua	: ";
	cin>>kelasA[1].nama;
	cout<<"Masukkan umur mahasiswa kedua	: ";
	cin>>kelasA[1].umur;
	cout<<"Masukkan ipk mahasiswa kedua		: ";
	cin>>kelasA[1].ipk;
	cout<<"---------------------------------"<<endl;
	cout<<"Anda ingin melihat data mahasiswa dengan urutan keberapa ?";
	cin>>pilih;
	pilih--;
	cout<<"Nama mahasiswa 	= "<<kelasA[pilih].nama<<endl;
	cout<<"Umur mahasiswa 	= "<<kelasA[pilih].umur<<endl;
	cout<<"IPK mahasiswa 	= "<<kelasA[pilih].ipk;
	return 0;
}
