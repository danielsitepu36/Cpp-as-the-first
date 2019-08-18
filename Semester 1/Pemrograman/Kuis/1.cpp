#include<iostream>
#include<iomanip>
using namespace std;

int n=0,m=0,x=0;

struct siswa{
    long NIM;
    long PemakaianKuota;
    long LamaOnline;
};

siswa data[100];
siswa temp[2];

void selection(int n,siswa data[],int &x);
void showtable(siswa data[]);

int main(){

    data[0].NIM=12612;
    data[0].PemakaianKuota=1343;
    data[0].LamaOnline=203;
    data[1].NIM=12932;
    data[1].PemakaianKuota=836;
    data[1].LamaOnline=105;
    data[2].NIM=12742;
    data[2].PemakaianKuota=943;
    data[2].LamaOnline=135;
    data[3].NIM=12972;
    data[3].PemakaianKuota=1762;
    data[3].LamaOnline=164;
    data[4].NIM=12418;
    data[4].PemakaianKuota=1572;
    data[4].LamaOnline=152;
    data[5].NIM=12835;
    data[5].PemakaianKuota=1628;
    data[5].LamaOnline=192;
    data[6].NIM=12782;
    data[6].PemakaianKuota=1273;
    data[6].LamaOnline=134;
    data[7].NIM=12265;
    data[7].PemakaianKuota=1792;
    data[7].LamaOnline=196;
    data[8].NIM=12944;
    data[8].PemakaianKuota=1335;
    data[8].LamaOnline=168;
    data[9].NIM=12988;
    data[9].PemakaianKuota=693;
    data[9].LamaOnline=150;
    data[10].NIM=12776;
    data[10].PemakaianKuota=1482;
    data[10].LamaOnline=108;
    data[11].NIM=12532;
    data[11].PemakaianKuota=1341;
    data[11].LamaOnline=95;
    data[12].NIM=12318;
    data[12].PemakaianKuota=1073;
    data[12].LamaOnline=157;
    data[13].NIM=12823;
    data[13].PemakaianKuota=957;
    data[13].LamaOnline=128;
    data[14].NIM=12553;
    data[14].PemakaianKuota=1328;
    data[14].LamaOnline=116;

    cout<<"QUIZ PEMROGRAMAN 1 DANIEL S. S. 18/424185/PA/18290"<<endl;
    n=15;
    showtable(data);
    selection(n,data,x);
    cout<<endl<<"Hasil setelah sorting menggunakan selection sort : "<<endl;
    showtable(data);
    cout<<"Jumlah perpindahan posisi : "<<x<<endl<<endl;
    system("PAUSE");
}

void showtable(siswa data[]){
   cout<<"========TABEL DATA SURVEY MAHASISWA========"<<endl;
    cout<<setw(10)<<"NIM |"<<setw(19)<<"Pemakaian Kuota |"<<setw(14)<<"Lama Online |"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(8)<<data[i].NIM<<" |"<<setw(17)<<data[i].PemakaianKuota<<" |"<<setw(12)<<data[i].LamaOnline<<" |"<<endl;
    }
    cout<<"=========================================="<<endl;
}

void selection(int n,siswa data[],int &x){
    for(int i=0;i<n-1;i++){
    	int minim=i;
    	for(int j=i+1;j<n;j++){
    		if(data[j].LamaOnline<data[minim].LamaOnline){
    			minim=j;
    		}
    	}
    		temp[0]=data[i];
    		data[i]=data[minim];
    		data[minim]=temp[0];
            if(data[i].LamaOnline!=data[minim].LamaOnline){
                x++;
            }
	}
}