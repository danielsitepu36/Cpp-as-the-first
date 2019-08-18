#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int umur;
	float ipk;	
};

mahasiswa kelasA[100];
int pilih,n,n2,i,menu,x,pilih1,pilih2;
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
	goto menu;
	
	add:
	cout<<"Masukkan jumlah tambahan mahasiswa = ";
	cin>>n2;
	n=n+n2;
	for(i;i<=n;i++){
		cout<<"Masukkan nama mahasiswa ke-"<<i<<"	: ";
		cin>>kelasA[i].nama;
		cout<<"Masukkan umur mahasiswa ke-"<<i<<"	: ";
		cin>>kelasA[i].umur;
		cout<<"Masukkan ipk mahasiswa ke-"<<i<<"	: ";
		cin>>kelasA[i].ipk;
		cout<<"---------------------------------"<<endl;
	}
	goto menu;
	
	edit:
		cout<<"Masukkan nomor data yang ingin diedit = ";
		cin>>x;
		cout<<"Masukkan nama mahasiswa ke-"<<x<<"	: ";
		cin>>kelasA[x].nama;
		cout<<"Masukkan umur mahasiswa ke-"<<x<<"	: ";
		cin>>kelasA[x].umur;
		cout<<"Masukkan ipk mahasiswa ke-"<<x<<"	: ";
		cin>>kelasA[x].ipk;
		cout<<"---------------------------------"<<endl;
		goto menu;
	
	show:
	while(j!='N'){
		cout<<"Anda ingin melihat data mahasiswa dengan urutan keberapa = ";
		cin>>pilih;
		cout<<"Nama mahasiswa 	= "<<kelasA[pilih].nama<<endl;
		cout<<"Umur mahasiswa 	= "<<kelasA[pilih].umur<<endl;
		cout<<"IPK mahasiswa 	= "<<kelasA[pilih].ipk<<endl;	
		cout<<"Ingin melihat data lagi ? (Y/N) Tulis 'M' untuk kembali ke menu ! ";
		cin>>j;
		cout<<"---------------------------------"<<endl;
		if(j=='M'){
			goto menu;
		}
	}
	cout<<"Terima Kasih !";
	
	show2:
		cout<<"Anda ingin melihat data mahasiswa dengan urutan ke = ";
		cin>>pilih1;
		cout<<"Sampai = ";
		cin>>pilih2;
		for(pilih1;pilih1<=pilih2;pilih1++){
			cout<<"Nama mahasiswa 	= "<<kelasA[pilih1].nama<<endl;
			cout<<"Umur mahasiswa 	= "<<kelasA[pilih1].umur<<endl;
			cout<<"IPK mahasiswa 	= "<<kelasA[pilih1].ipk<<endl;
			cout<<"---------------------------------"<<endl;
		}
	
	menu:
		cout<<"Pilihan menu :"<<endl;
		cout<<"1) Tambah data"<<endl;
		cout<<"2) Edit data"<<endl;
		cout<<"3) Tampilkan data"<<endl;
		cout<<"4) Tampilkan data range"<<endl;
		cout<<"5) Exit"<<endl;
		cout<<"Masukkan opsi = ";
		cin>>menu;
		if(menu==1){
			goto add;
		}
		else if(menu==2){
			goto edit;
		}
		else if(menu==3){
			goto show;
		}
		else if(menu==4){
			goto show2;
		}
		else if(menu==5){
			cout<<"Terima Kasih !";
			goto exit;
		}
		else{
			cout<<"Pilihan salah !";
			goto menu;
		}
		
	exit:
	return 0;
}
