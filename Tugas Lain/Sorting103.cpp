#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

int n,m,a=0,b=0,c=0,d=0,e=0;

struct pemilih{
    string nama;
    long long unsigned NIK;
    int umur;
};

pemilih data[10000];
pemilih temp[2];
pemilih tidaksah[10000];
pemilih pemula[10000];
pemilih labil[10000];
pemilih mantap[10000];
pemilih lansia[10000];

void showtable(pemilih data[],int n){
   cout<<"=====================TABEL DATA PEMILIH====================="<<endl;
    cout<<setw(32)<<"Nama |"<<setw(20)<<"NIK |"<<setw(8)<<"Umur |"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(30)<<data[i].nama<<" |"<<setw(18)<<data[i].NIK<<" |"<<setw(6)<<data[i].umur<<" |"<<endl;
    }
    cout<<"============================================================"<<endl;
}

void selection(int n,pemilih data[]){
    for(int i=0;i<n-1;i++){
    	int minim=i;
    	for(int j=i+1;j<n;j++){
    		if(data[j].NIK<data[minim].NIK){
    			minim=j;
    		}
    	}
    		temp[0]=data[i];
    		data[i]=data[minim];
    		data[minim]=temp[0];
    }
}

void group(pemilih data[],int n){
    int i;
    for(i=0;i<n;i++){
		if (data[i].umur<17){
			tidaksah[a]=data[i];
			a=a+1;
		}
		else if (data[i].umur<23){
			pemula[b]=data[i];
			b=b+1;
		}
		else if (data[i].umur<36){
			labil[c]=data[i];
			c=c+1;
		}
		else if (data[i].umur<61){
			mantap[d]=data[i];
			d=d+1;
		}
		else{
			lansia[e]=data[i];
			e=e+1;
		}
	}
}

int main(){
    cout<<"PROGRAM SORTING PEMILIH"<<endl;
    cout<<"Masukkan Jumlah Pemilih = ";
    cin>>n;
	cout<<"========================DATA PEMILIH========================"<<endl;
    for(int i=0;i<n;i++){
        m=i+1;
		cout<<"Masukkan Nama pemilih ke-"<<m<<"	: ";
	    cin.ignore();
		getline(cin,data[i].nama);
		cout<<"Masukkan NIK pemilih ke-"<<m<<"	: ";
		cin>>data[i].NIK;
		cout<<"Masukkan Umur pemilih ke-"<<m<<"	: ";
		cin>>data[i].umur;
        cout<<"------------------------------------------------------------"<<endl;
    };
    showtable(data,n);
    cout<<endl<<"Pengurutan berdasarkan NIK :"<<endl;
    selection(n,data);
    showtable(data,n);
    group(data,n);
    cout<<endl<<"Penggolongan berdasarkan umur dan urutan NIK :"<<endl;
    cout<<"Pemilih Tidak Sah :"<<endl;
    showtable(tidaksah,a);
    cout<<endl<<endl<<"Pemilih Pemula :"<<endl;
    showtable(pemula,b);
    cout<<endl<<endl<<"Pemilih Labil :"<<endl;
    showtable(labil,c);
    cout<<endl<<endl<<"Pemilih Mantap :"<<endl;
    showtable(mantap,d);
    cout<<endl<<endl<<"Pemilih Lansia :"<<endl;
    showtable(lansia,e);
    system("PAUSE");
    return 0;
}