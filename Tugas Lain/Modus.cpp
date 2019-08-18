#include <iostream>
#include <algorithm>			//buat sort<<<cuma biar dong, gk usah ditulis
#include <cstdlib>				//buat rand
#include <time.h>				//buat rand
#include <iomanip>				//buat setw(biar rapi)
using namespace std;

int main(){
	int n,i,j,jum,jumlah,modus;
	cout<<"PROGRAM MENCARI MODUS"<<endl;
	cout<<"Masukkan jumlah bilangan yang diinginkan = ";
	cin>>n;
	cout<<endl;
	
	int x[n];					//deklarasi array x setelah tau jumlah n
	
	srand(time(0));				//biar hasil rand selalu beda
	cout<<"Bilangan :"<<endl;
	for(i=0;i<n;i++){
		x[i]=rand() % 10000 + 1;		//bikin angka random
		cout<<setw(3)<<x[i]<<", ";	//biar rapi aja
		if(i==9 || i%10==9){	
			cout<<endl;				//biar ganti baris rapi aja
		}
	}
	
	sort(x,x+n);					//urutin angka
	
	cout<<endl<<"Setelah diurutkan :"<<endl;		//ngeluarin setelah diurutin
	for(i=0;i<n;i++){
		cout<<setw(4)<<x[i]<<", ";	//biar rapi aja
		if(i==9 || i%10==9){	
			cout<<endl;				//biar ganti baris rapi aja
		}
	}
		
	jum=1;
	for(i=0;i<n;i++){
		j=i+1;					//pembanding
		if(x[j]!=x[i]){			//kalau angka kedua = angka sebelumnya
			if (jum>jumlah){	//kalau modus angka ke-x lebih besar daripada sebelumnya
				jumlah=jum;		//jumlah dituker
				modus=x[i];		//modus dituker
			}
			jum=1;
		}
		else{
			jum++;				//setiap angka sama, jum ditambah 1
		}
	}
	
	cout<<endl;
	if(jumlah==1){
		cout<<"Tidak ada Modus";
	}
	else{
		cout<<"Modus = "<<modus<<endl;
		cout<<"Jumlah modus = "<<jumlah;
	}
	return 0;
}
