#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int umur;
	float ipk;	
};

mahasiswa kelasA[100];
int pilih,n,i;
char j;

int main(){
	
	cout<<"PROGRAM DATA MAHASISWA"<<endl;
	cout<<"Masukkan jumlah mahasiswa = ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Masukkan nama mahasiswa ke-"<<i<<"	: ";
		cin>>kelasA[i].nama;
		cout<<"Masukkan umur mahasiswa ke-"<<i<<"	: ";
		cin>>kelasA[i].umur;
		cout<<"Masukkan ipk mahasiswa ke-"<<i<<"	: ";
		cin>>kelasA[i].ipk;
		cout<<"---------------------------------"<<endl;
	}
	while(j!='N'){
		cout<<"Anda ingin melihat data mahasiswa dengan urutan keberapa = ";
		cin>>pilih;
		cout<<"Nama mahasiswa 	= "<<kelasA[pilih].nama<<endl;
		cout<<"Umur mahasiswa 	= "<<kelasA[pilih].umur<<endl;
		cout<<"IPK mahasiswa 	= "<<kelasA[pilih].ipk<<endl;	
		cout<<"Ingin melihat data lagi ? (Y/N) = ";
		cin>>j;
	}
	cout<<"Terima Kasih !";
	return 0;
}
