#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int n=0,a=0,b=0,c=0,d=0,x=0;
int total=0;
float rata;

int main(){
	cout<<"PROGRAM STRUKTUR PENGULANGAN"<<endl;
	cout<<"Masukkan jumlah angka acak = ";
	cin>>n;
	cout<<endl;
	
	srand(time(0));
	for(int i=1;i<=n;i++){
		x=rand() % 100 + 1;
		if (x<=25){
			a=a+1;
		}
		else if (x<=50){
			b=b+1;
		}
		else if (x<=75){
			c=c+1;
		}
		else {
			d=d+1;
		}
	cout<<x<<" ";
	total=total+x;
	}
	
	cout<<endl;
	cout<<"Banyak data antara 0 s.d 25 = "<<a<<endl;
	cout<<"Banyak data antara 26 s.d 50 = "<<b<<endl;
	cout<<"Banyak data antara 51 s.d 75 = "<<c<<endl;
	cout<<"Banyak data antara 76 s.d 100 = "<<d<<endl<<endl;
	
	rata=total/n;
	cout<<"Rata-rata data tersebut adalah = "<<rata;
	return 0;
}
