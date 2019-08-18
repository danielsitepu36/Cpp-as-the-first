#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdio.h>
using namespace std;

int n,m;
string s;
char kode;

struct kaset{
    string musisi;
    int tahun;
    int sideA;
    int sideB;
    char rak;
};

kaset list[10000];
kaset templist[1000];
int dist[10000];
int jumlahdist[10000];
int tahundist[10000];
int tempdist[1];
kaset data[10000];
kaset tempdata[1];

void selection(int n,kaset data[]);
//void showtable(kaset data[]);
void search(kaset data[],int j,string s);
void distribusi(kaset data[], int dist[], int n);
void daftar(kaset data[], kaset list[], int n,char kode);

int main(){
    cout<<"Masukkan Jumlah Kaset = ";
    cin>>n;
	cout<<"======================DATA KASET======================"<<endl;
    for(int i=0;i<n;i++){
        m=i+1;
		cout<<"Masukkan Nama Musisi kaset ke-"<<m<<"	: ";
        cin.ignore();
		getline(cin,data[i].musisi); //cin>>data[i].musisi;
		cout<<"Masukkan Tahun kaset ke-"<<m<<"	: ";
		cin>>data[i].tahun;
    	cout<<"Masukkan jumlah lagu di side A kaset ke-"<<m<<"	: ";
		cin>>data[i].sideA;
		cout<<"Masukkan jumlah lagu di side B kaset ke-"<<m<<"	: ";
		cin>>data[i].sideB;
		cout<<"Masukkan kode rak kaset ke-"<<m<<"	: ";
		cin>>data[i].rak;
        cout<<"------------------------------------------------------"<<endl;
    };
    cout<<"Masukkan nama musisi yang ingin anda cari : ";
    cin.ignore();
    getline(cin,s);
    search(data,n,s);
    distribusi(data,dist,n);
    cout<<"Masukkan kode rak : ";
    cin>>kode;
    daftar(data,list,n,kode);
    return 0;
}

void search(kaset data[],int j,string s){
    char koderak[j];
    int m=0;
    bool found=false;
    for(int i=0;i<j;i++){
        if(data[i].musisi==s){
            koderak[m]=data[i].rak;
            found=true;
            m++;
        }
    }
    if(found==true){
        cout<<"Kode rak kaset = ";
        for(int i=0;i<m;i++){
            cout<<koderak[i]<<" ";
        }
    }
    else{
        cout<<endl<<"Tidak ditemukan";
    }
    cout<<endl;
}

void distribusi(kaset data[], int dist[], int n){
    int j,k;
    for(int i=0;i<n;i++){
        dist[i]=data[i].tahun;
    }
    for(int i=0;i<n;i++){
        jumlahdist[i]=1;
    }
    for(int i=0;i<n-1;i++){
    	int minim=i;
    	for(int j=i+1;j<n;j++){
    		if(dist[j]<dist[minim]){
    			minim=j;
    		}
    	}
    		tempdist[0]=dist[i];
    		dist[i]=dist[minim];
    		dist[minim]=tempdist[0];
	}
    k=0;
    for(int i=0;i<n;i++){
        tahundist[k]=dist[i];
        while(dist[i+1]==dist[i]){
            jumlahdist[k]++;
            i++;
        }
        k++;
    }
    cout<<"Tahun | Jumlah |"<<endl;
    for(int i=0;i<k;i++){
        cout<<tahundist[i]<<"  |      "<<jumlahdist[i]<<" |"<<endl;
    }
}

void daftar(kaset data[], kaset list[], int n,char kode){
    int k=0;
    for(int i=0;i<n;i++){
        if(data[i].rak==kode){
            list[k]=data[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
    	int minim=i;
    	for(int j=i+1;j<k;j++){
    		if(list[j].tahun<list[minim].tahun){
    			minim=j;
    		}
    	}
    		templist[0]=list[i];
    		list[i]=list[minim];
    		list[minim]=templist[0];
	}
    cout<<"Daftar tahun kaset pada rak ke-"<<kode<<" = "<<endl;
	cout<<"======================DATA KASET======================"<<endl;
    for(int i=k-1;i>=0;i--){
        m=i+1;
		cout<<"Nama Musisi kaset ke-"<<m<<"	: "<<list[i].musisi<<endl;
		cout<<"Tahun kaset ke-"<<m<<"	: "<<list[i].tahun<<endl;
    	cout<<"Jumlah lagu di side A kaset ke-"<<m<<"	: "<<list[i].sideA<<endl;
		cout<<"Jumlah lagu di side B kaset ke-"<<m<<"	: "<<list[i].sideB<<endl;
		cout<<"Kode rak kaset ke-"<<m<<"	: "<<list[i].rak<<endl;
        cout<<"------------------------------------------------------"<<endl;
    }
}