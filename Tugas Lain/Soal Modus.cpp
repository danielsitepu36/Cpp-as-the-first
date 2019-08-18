#include <iostream>					//kalau ada kayak gini gk usah ditulis, cuma penjelasan		
using namespace std;

int main(){
	int n,i,j,jum,jumlah,modus;
	cout<<"PROGRAM MENCARI MODUS"<<endl;
	cout<<"Masukkan jumlah bilangan yang diinginkan = ";
	cin>>n;
	cout<<endl;
	
	int x[n];
	
	cout<<"Bilangan : ";
	jum=1;
	jumlah=1;
	for(i=0;i<n;i++){
		cin>>x[i];					//input angka sebanyak n kali
		for(j=0;j<i;j++){			//cek angka baru dengan angka di array sebelumnya
			if(x[j]==x[i]){			//kalau sama jum ketambah 1
				jum++;
			}
		}
		if (jum>jumlah){			//kalau jum lebih besar dari jumlah, jumlah modus diperbarui jadi jum
			jumlah=jum;	
			modus=x[i];				//modusnya juga diganti sama angka baru
		}
		jum=1;
	}
	
	cout<<endl;
	if(jumlah==1){
		cout<<"Tidak ada Modus";
	}
	else{
		cout<<"Modusnya adalah "<<modus;
		cout<<" dengan frekuensi "<<jumlah;
	}
	return 0;
}
