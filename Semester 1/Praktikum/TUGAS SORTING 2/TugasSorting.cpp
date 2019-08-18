#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

int n,m;

struct tabel{
    long long unsigned NISN;
    string nama;
    int nilai;
};

tabel data[100];
tabel temp[2];

void bubble(int n,tabel data[],int x);
void insertion(int n,tabel data[],int x);
void selection(int n,tabel data[],int x);
void showtable(tabel data[]);

int main(){

data[0].NISN=9960312699;
data[0].nama="Handi Ramadhan";
data[0].nilai=90;
data[1].NISN=9963959682;
data[1].nama="Rio Alfandra";
data[1].nilai=55;
data[2].NISN=9950310962;
data[2].nama="Ronaldo Valentino Uneputty";
data[2].nilai=80;
data[3].NISN=9970272750;
data[3].nama="Achmad Yaumil Fadjri R.";
data[3].nilai=60;
data[4].NISN=9970293945;
data[4].nama="Alivia Rahma Pramesti";
data[4].nilai=70;
data[5].NISN=9952382180;
data[5].nama="Ari Lutfianto";
data[5].nilai=65;
data[6].NISN=9965653989;
data[6].nama="Arief Budiman";
data[6].nilai=60;

    int menusort,carasort;
    char re;
    cout<<"PROGRAM SORTING LATIHAN 8.3"<<endl;
    n=7;
    /*cout<<"Masukkan Jumlah Siswa = ";
    cin>>n;
	cout<<"======================DATA SISWA======================"<<endl;
    for(int i=0;i<n;i++){
        m=i+1;
		cout<<"Masukkan NISN siswa ke-"<<m<<"	: ";
		cin>>data[i].NISN;
		cout<<"Masukkan Nama siswa ke-"<<m<<"	: ";
        cin.ignore();
		getline(cin,data[i].nama);
		cout<<"Masukkan Nilai siswa ke-"<<m<<"	: ";
		cin>>data[i].nilai;
        cout<<"------------------------------------------------------"<<endl;
    };*/
    showtable(data);

    menu:
    cout<<"Menu Sorting :"<<endl;
    cout<<"1) Urutkan berdasarkan NISN"<<endl;
    cout<<"2) Urutkan berdasarkan nilai"<<endl;
    cout<<"Masukkan pilihan anda = ";
    cin>>menusort;
    if(menusort!=1 && menusort!=2){
        cout<<"Pilihan Salah !";
        goto menu;
    }

    cara:
    cout<<endl<<"Cara Sorting :"<<endl;
    cout<<"1) Metode Penyisipan (Insertion Sort)"<<endl;
    cout<<"2) Metode Seleksi (Selection Sort)"<<endl;
    cout<<"3) Metode Gelembung (Bubble Sort)"<<endl;
    cout<<"Masukkan pilihan anda = ";
    cin>>carasort;
    if(carasort==1){
        cout<<"Anda memilih metode penyisipan !"<<endl;
        insertion(n,data,menusort);
    }
    else if(carasort==2){
        cout<<"Anda memilih metode seleksi !"<<endl;
        insertion(n,data,menusort);
    }
    else if(carasort==3){
        cout<<"Anda memilih metode gelembung !"<<endl;
        insertion(n,data,menusort);
    }
    else{
        cout<<"Pilihan anda salah !"<<endl;
        goto cara;
    }
    cout<<endl;
    showtable(data);
    
    cout<<"Ingin megulang program ?(Y/N) = ";
    cin>>re;
    if(re=='Y'){
        goto menu;
    }
    else{
        cout<<"TERIMA KASIH !"<<endl;
        system("PAUSE");
        return 0;
    }
}

void showtable(tabel data[]){
   cout<<"===================TABEL DATA SISWA==================="<<endl;
    cout<<setw(14)<<"NISN |"<<setw(32)<<"Nama |"<<setw(8)<<"Nilai |"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(12)<<data[i].NISN<<" |"<<setw(30)<<data[i].nama<<" |"<<setw(6)<<data[i].nilai<<" |"<<endl;
    }
    cout<<"======================================================"<<endl;
}

void bubble(int n,tabel data[],int x){
    if(x==1){
        for(int i=0;i<n-1;i++){
	    	for(int j=0;j<n-1;j++){
	    		if(data[j].NISN>data[j+1].NISN){
	    			temp[0]=data[j];
	    			data[j]=data[j+1];
	    			data[j+1]=temp[0];
	    		}
	    	}
	    }
    }
    else{
        for(int i=0;i<n-1;i++){
	    	for(int j=0;j<n-1;j++){
		    	if(data[j].nilai>data[j+1].nilai){
			    	temp[0]=data[j];
				    data[j]=data[j+1];
    				data[j+1]=temp[0];
	    		}
	    	}
	    }
    }
}

void insertion(int n,tabel data[],int x){
    if(x==1){
        for(int j=1;j<n;j++){
    		int i=j-1;
    		temp[0]=data[j];
    		while(data[i].NISN>temp[0].NISN && i>=0){
    			data[i+1]=data[i];
    			i--;
    		}
    		data[i+1]=temp[0];
    	}
    }
    else{
        for(int j=1;j<n;j++){
    		int i=j-1;
    		temp[0]=data[j];
    		while(data[i].nilai>temp[0].nilai && i>=0){
    			data[i+1]=data[i];
    			i--;
    		}
    		data[i+1]=temp[0];
    	}
    }
}

void selection(int n,tabel data[],int x){
    if(x==1){
        for(int i=0;i<n-1;i++){
    		int minim=i;
    		for(int j=i+1;j<n;j++){
    			if(data[j].NISN<data[minim].NISN){
    				minim=j;
    			}
    		}
    			temp[0]=data[i];
    			data[i]=data[minim];
    			data[minim]=temp[0];
    	}
    }
    else{
        for(int i=0;i<n-1;i++){
    		int minim=i;
    		for(int j=i+1;j<n;j++){
    			if(data[j].nilai<data[minim].nilai){
    				minim=j;
    			}
    		}
    			temp[0]=data[i];
    			data[i]=data[minim];
    			data[minim]=temp[0];
    	}
    }
}