#include<iostream>
#include<ctime>
#include<string.h>
using namespace std;
struct swalayan{
	string kode;
	string nama;
	int harga;
	int jumlah;	
};

swalayan barang [50];
int n,i,totalharga,totalbarang;
float rata,uang,kembalian;

int main(){
	time_t now=time(0);
	char* dt = ctime(&now);
	cout<<"PROGRAM MENCARI BARANG SWALAYAN"<<endl;
	cout<<"================================="<<endl;
	cout<<"SWALAYAN MAHAL"<<endl;
	cout<<"JL. KENANGAN INDAH, YOGYAKARTA"<<endl;
	cout<<"CASHIER		: MAWAR"<<endl;
	cout<<"TIME		: "<<dt;
	cout<<"================================="<<endl;
	cout<<"Masukkan jumlah barang = ";
	cin>>n;
	cout<<"================================="<<endl;
	for(i=1;i<=n;i++){
		cout<<"Masukkan kode barang ke-"<<i<<"	: ";
		cin>>barang[i].kode;
		cout<<"Masukkan nama barang ke-"<<i<<"	: ";
		cin>>barang[i].nama;
		cout<<"Masukkan harga barang ke-"<<i<<"	: Rp ";
		cin>>barang[i].harga;
		cout<<"Masukkan jumlah barang ke-"<<i<<"	: ";
		cin>>barang[i].jumlah;
	cout<<"================================="<<endl;
		totalharga+=barang[i].harga*barang[i].jumlah;
		totalbarang+=barang[i].jumlah;
	}
	rata=totalharga/totalbarang;
	cout<<"HARGA TOTAL 			: Rp "<<totalharga<<endl;
	cout<<"JUMLAH SEMUA BARANG 		: "<<totalbarang<<" pcs"<<endl;
	cout<<"RATA-RATA BARANG 		: Rp "<<rata<<endl;
	cout<<"================================="<<endl;
	cout<<"UANG DIBAYARKAN			: Rp ";
	cin>>uang;
	kembalian=uang-totalharga;
	cout<<"UANG KEMBALIAN			: Rp "<<kembalian<<endl;
	cout<<"================================="<<endl;
	cout<<"TERIMA KASIH !";
	return 0;
}
