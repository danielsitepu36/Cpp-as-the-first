#include <iostream>
//ini include buat bikin tabel biar rapi (setw nya)
#include <iomanip>
using namespace std;

//declare dulu semua diatas biar bisa dipakai fungsi searching
int n=0,m=0,cari=0;

struct tabelperiodik{
    string nama;
    int noatom;
    float nomassa;
};

//ada 2 struk, yg atas yg utama, yg temp buat nyimpen pas dituker tuker
tabelperiodik unsur[1000];
tabelperiodik temp[1];
tabelperiodik unsurdicari[1];

//declare fungsinya diatas, tapi isi fungsi tak taroh bawah
void showtable(tabelperiodik unsur[], int n);
void sort(tabelperiodik unsur[]);
void search(tabelperiodik unsur[], int cari);

int main(){
    cout<<"PROGRAM  TABEL PERIODIK"<<endl;
    cout<<"Masukkan Jumlah Unsur = ";
    cin>>n;

    //Masukin unsur sebanyak n
	cout<<"==================DATA UNSUR=================="<<endl;
    for(int i=0;i<n;i++){
        m=i+1;
		cout<<"Masukkan Nama Unsur ke-"<<m<<"	: ";
        cin>>unsur[i].nama;
		cout<<"Masukkan Nomor Atom ke-"<<m<<"	: ";
		cin>>unsur[i].noatom;
		cout<<"Masukkan Nomor Massa ke-"<<m<<"	: ";
		cin>>unsur[i].nomassa;
        cout<<"----------------------------------------------"<<endl;
    }
    showtable(unsur,n);
    cout<<endl<<"Setelah diurutkan :"<<endl;
    //sorting pakai selection sort
    sort(unsur);
    showtable(unsur,n);

    cout<<"Masukkan nomor atom unsur yang ingin dicari : ";
    cin>>cari;
    search(unsur,cari);
    return 0;
}

//fungsi nampilin pake tabel1
void showtable(tabelperiodik unsur[],int n){
   cout<<"============TABEL DATA UNSUR============"<<endl;
    cout<<setw(13)<<"Nomor Atom |"<<setw(14)<<"Nama Unsur |"<<setw(13)<<"Nomor Massa |"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(11)<<unsur[i].noatom<<" |"<<setw(12)<<unsur[i].nama<<" |"<<setw(11)<<unsur[i].nomassa<<" |"<<endl;
    }
    cout<<"========================================"<<endl;
}

//fungsi ngurutin pake selection sort
void sort(tabelperiodik unsur[]){
    int min;
    for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(unsur[j].noatom<unsur[min].noatom){
				min=j;
			}
		}
		temp[0]=unsur[i];
		unsur[i]=unsur[min];
		unsur[min]=temp[0];
	}
}

//fungsi binarysearch
void search(tabelperiodik unsur[],int cari){
    bool found=false;
    int i=0,k=0,j=n;
    while(!found && i<=j){
        k=(i+j)/2;
        if(unsur[k].noatom<cari){
            i=k+1;
        }
        else if(unsur[k].noatom==cari){
            found=true;
            unsurdicari[0]=unsur[k];
        }
        else{
            j=k-1;
        }
    }
    if(!found){
        cout<<"Tidak Ditemukan";
    }
    else{
        cout<<endl<<"Ditemukan !"<<endl;
        showtable(unsurdicari,1);
    }
}