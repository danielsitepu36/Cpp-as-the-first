#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

int n,m;
float ip,totalsks,totalnilai;

struct transkrip{
    string kode;
    string mk;
    int sks;
    char nilaihuruf;
    int nilaiangka;
    int nilai;
};

transkrip data[10000];

void showtable(transkrip data[],int n){
   cout<<"======================TABEL DATA NILAI======================"<<endl;
    cout<<setw(10)<<"Kode |"<<setw(14)<<"Mata Kuliah |"<<setw(10)<<"SKS |"<<setw(16)<<"Nilai |"<<setw(10)<<"SKS*Nilai |"<<endl;;
    cout<<"------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(8)<<data[i].kode<<" |"<<setw(13)<<data[i].mk<<" |"<<setw(8)<<data[i].sks<<" |"<<setw(6)<<data[i].nilaihuruf<<" |"<<setw(6)<<data[i].nilaiangka<<" |"<<setw(9)<<data[i].nilai<<" |"<<endl;
    };
    cout<<"============================================================"<<endl;
}

int main(){
    cout<<"Program Transkrip Nilai"<<endl;
    cout<<"Masukkan Jumlah Data Nilai = ";
    cin>>n;
    cout<<"=========================DATA NILAI========================="<<endl;
    for(int i=0;i<n;i++){
        m=i+1;
		cout<<"Masukkan kode ke-"<<m<<"            : ";
	    cin>>data[i].kode;
		cout<<"Masukkan mata kuliah ke-"<<m<<"     : ";
		cin>>data[i].mk;
		cout<<"Masukkan sks ke-"<<m<<"             : ";
		cin>>data[i].sks;
        cout<<"Masukkan nilai (huruf) ke-"<<m<<"   : ";
		cin>>data[i].nilaihuruf;
        cout<<"------------------------------------------------------------"<<endl;
    };
    for(int i=0;i<n;i++){
        if(data[i].nilaihuruf=='A'){
            data[i].nilaiangka=4;
        }
        else if(data[i].nilaihuruf=='B'){
            data[i].nilaiangka=3;
        }
        else if(data[i].nilaihuruf=='C'){
            data[i].nilaiangka=2;
        }
        else if(data[i].nilaihuruf=='D'){
            data[i].nilaiangka=1;
        }
        else{
            data[i].nilaiangka=0;
        }
    }
    for(int i=0;i<n;i++){
        data[i].nilai=data[i].sks*data[i].nilaiangka;
    }
    showtable(data,n);
    for(int i=0;i<n;i++){
        totalnilai+=data[i].nilai;
        totalsks+=data[i].sks;
    }
    ip=totalnilai/totalsks;
    cout<<endl<<"IP = "<<ip;
    return 0;
}
