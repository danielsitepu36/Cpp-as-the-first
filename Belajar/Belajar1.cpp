#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	string nama = "daniel1234";
	int a,b,c,d,e,i,n,p,l,t,s,w,x,y,z;
	
	atas:
	cout << "Masukkan Sandi : ";
	cin >> nama;

	if (nama=="daniel1234"){
		system ("CLS");
		cout << "Selamat Datang Admin !\n";
		w = 0;
		x = 1;
	}
	    else {
	    system ("CLS");
        cout << "Maaf, anda bukan Admin !\n";
        w = 1;
        goto exit;
    }
    
    
    pernyataan:
    if (w==1){
		system ("CLS");
		goto atas;
    }
    else if (x||y==1){
    	goto hitungan;
    }
	else{
		cout<<"Terima Kasih !";
		return 0;
	}
	
	exit:
		cout<<"Apakah anda mau keluar dari program ?\n";
		cout<<"1) Tidak\n";
		cout<<"2) Ya\n";
		x = 0;
		cin >> y;
		system ("CLS");
		goto pernyataan;
	
	
	hitungan:
		a=0;b=0;c=0;d=0;e=0;n=0;i=0;p=0;l=0;t=0;s=0;z==0;
		cout<<"Selamat Datang di Program Hitungan Sederhana !\n";
		cout<<"Silakan Pilih Jenis Hitungan !\n";
		cout<<"1) Keluar Program\n";
		cout<<"2) Luas\n";
		cout<<"3) Keliling\n";
		cout<<"4) Volume\n";
		cout<<"5) Phytagoras\n";
		cout<<"6) Menentukan Bilangan Prima\n";
		cout<<"Masukkan Pilihanmu : ";
		cin >> z;
	if (z==1){
		system ("CLS");
		goto exit;
	}
	else if (z==2){
		system ("CLS");
		cout<<"Pilih jenis bangun :\n";
		cout<<"1) Persegi\n";
		cout<<"2) Persegi Panjang\n";
		cout<<"3) Segitiga\n";
		cout<<"4) Lingkaran\n";
		cout<<"5) Belah Ketupat\n";
		cout<<"6) Layang-layang";
		cout<<"7) Jajargenjang";
		cout<<"8) Trapesium";
		cout<<"Masukkan Pilihanmu : ";
	}
	else if (z==3){
		system ("CLS");
		cout<<"Pilih jenis bangun :\n";
		cout<<"1) Persegi\n";
		cout<<"2) Persegi Panjang\n";
		cout<<"3) Segitiga\n";
		cout<<"4) Lingkaran\n";
		cout<<"5) Belah Ketupat\n";
		cout<<"6) Layang-layang";
		cout<<"7) Jajargenjang";
		cout<<"8) Trapesium";
		cout<<"Masukkan Pilihanmu : ";
	}
	else if (z==4){
		system ("CLS");
		cout<<"Hola";
	}
	else if (z==5){
		system ("CLS");
		cout<<"Pilih sisi yang akan dicari ! \n";
		cout<<"1) Sisi yang mengapit siku-siku (Sisi pendek) \n";
		cout<<"2) Sisi yang ada di depan siku-siku (Sisi terpanjang) \n";
		cout<<"Masukkan Pilihanmu : ";
		cin >>n;
		if (n==1) {
			cout<<"Masukkan panjang sisi terpanjang (di depan siku-siku) : ";
			cin >>a;
			cout<<"\nMasukkan panjang sisi lainnya : ";
			cin >>b;
			c=(a*a)-(b*b);
			d=sqrt(c);
			cout<<"\nPanjang sisi ketiga adalah : "<<d;
			cout<<endl;
			system("PAUSE");
			system ("CLS");
			goto hitungan;
		}
		else if (n==2){
			cout<<"\nMasukkan panjang sisi pertama : ";
			cin >>a;
			cout<<"Masukkan panjang sisi kedua : ";
			cin >>b;
			c=(a*a)+(b*b);
			d=sqrt(c);
			cout<<"\nPanjang sisi yang ada di depan siku-siku adalah : "<<d;
			cout<<endl;
			system("PAUSE");
			system ("CLS");
			goto hitungan;
		}
		else{
		system ("CLS");
		cout<<"Pilihan anda salah !\n";
		goto hitungan;
		}
	}
	else if (z==6){
		system ("CLS");
		cout<<"Masukkan angka yang akan dicek ke-primaannya : \n";
		cin >>a;
		i=1;
		for (b=2;b<=sqrt(a);b++){
			if (a==2){
			break;
			}
			if (a%b==0){
				i=0;
			}
		}
		if(i==1){
			cout<<endl;
			cout<<a<<" Merupakan Bilangan Prima\n";
		}
		else{
			cout<<endl;
			cout<<a<<" Bukan Merupakan Bilangan Prima\n";
		}
	system("PAUSE");
	system ("CLS");
	goto hitungan;	
	}
	else{
		system ("CLS");
		cout<<"Pilihan anda salah !\n";
		goto exit;
	}
}
