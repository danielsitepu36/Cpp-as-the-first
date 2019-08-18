#include<iostream>
#include<algorithm>
using namespace std;

float terbalik(float a[],float j,float n);

float sebanding(float a[],float j,float n);

struct tanaman{
	string ID;
	float keindahan;
	float nilai;
	float trend;
	float periode;
};

tanaman kriteria[1000];
float x1[1000],x2[1000],x3[1000],x4[1000],nilai[1000];
float n,nilai1,nilai2,nilai3,nilai4;
int i,maks;

int main(){
	cout<<"Program Investasi Tanaman"<<endl;
	cout<<"Masukkan banyak tanaman = ";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++){
		cout<<"ID tanaman ke-"<<i<<" = ";
		cin>>kriteria[i].ID;
		cout<<"Tingkat keindahan tanaman ke-"<<i<<" = ";
		cin>>kriteria[i].keindahan;
		cout<<"Nilai jual tanaman ke-"<<i<<" = ";
		cin>>kriteria[i].nilai;
		cout<<"Trend tanaman ke-"<<i<<" = ";
		cin>>kriteria[i].trend;
		cout<<"Periode tanaman ke-"<<i<<" = ";
		cin>>kriteria[i].periode;
		x1[i]=kriteria[i].keindahan;
		x2[i]=kriteria[i].nilai;
		x3[i]=kriteria[i].trend;
		x4[i]=kriteria[i].periode;
		cout<<endl;
	}
	sort(x1+1,x1+i);
	sort(x2+1,x2+i);
	sort(x3+1,x3+i);
	sort(x4+1,x4+i);
	
	for(i=1;i<=n;i++){
	nilai[i]=terbalik(x1,kriteria[i].keindahan,n)+sebanding(x1,kriteria[i].nilai,n)+terbalik(x1,kriteria[i].trend,n)
			+terbalik(x1,kriteria[i].periode,n);
	if(nilai[i]>maks){
		maks=i;
	}
	}
	
	cout<<"Investasi terbaik pada tanaman : "<<endl;
	cout<<"ID tanaman : "<<kriteria[maks].ID<<endl;
	cout<<"Nilai jual tanaman : "<<kriteria[maks].nilai<<endl;
	cout<<"Tingkat keindahan tanaman : "<<kriteria[maks].keindahan<<endl;
	cout<<"Trend tanaman : "<<kriteria[maks].trend<<endl;
	cout<<"Periode tanaman : "<<kriteria[maks].periode<<endl;
	
	return 0;
}

float terbalik(float a[],float j,float n){
	int i,score=10;
	for(i=1;i<=n;i++){
		if(a[i]==j){
			break;
		}
		if(a[i]!=a[i+1]){
			score--;
		}
	}
	return score;
}

float sebanding(float a[],float j,float n){
	int i,score=10;
	for(i=n;i>0;i--){
		if(a[i]==j){
			break;
		}
		if(a[i]!=a[i+1]){
			score--;
		}
	}
	return score;
}
