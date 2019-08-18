#include <iostream>
using namespace std;

void puluhan(int a);
void ratusan(int a);
void ribuan(int a);
void jutaan(int a);
long long n,k,p;
	string s[20]={"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh"
					,"sebelas","dua belas","tiga belas","empat belas","lima belas","enam belas","tujuh belas"
					,"delapan belas","sembilan belas"};
int main(){
	cout<<"Masukan Angka : ";
	cin>>n;
	cout<<"Angka yang anda masukan : ";
	if(n==0)cout<<s[n];
	if(n<1000)ratusan(n);
	if(n<10000)ribuan(n);
	if(n<100000)puluhribuan(n);
}

void puluhribuan(int a){
	a=a%100000;
		if(a<10000){
			ribuan(a);
		}
		else if(a/1000==1){
		cout<<"sepuluh ribu ";
		ribuan(a);
		}
		else if(a%1000==0){
			cout<<s[a/10000]<<" puluh ribu ";
		}
		else{
			cout<<s[a/10000]<<" puluh ribu ";
			ribuan(a);
		}
	}
void ribuan(int a){
	a=a%10000;
		if(a<1000){
			ratusan(a);
		}
		else if(a/100==1){
		cout<<"seribu ";
		ratusan(a);
		}
		else if(a%100==0){
			cout<<s[a/1000]<<" ribu ";
		}
		else{
			cout<<s[a/1000]<<" ribu ";
			ratusan(a);
		}
	}
void ratusan(int a){
	a=a%1000;
		if(a<100){
			puluhan(a);
		}
		else if(a/100==1){
		cout<<"seratus ";
		puluhan(a);
		}
		else if(a%100==0){
			cout<<s[a/100]<<" ratus ";
		}
		else{
			cout<<s[a/100]<<" ratus ";
			puluhan(a);
		}
	}
void puluhan(int a){
	a=a%100;
		if(a<20&&a>0){
			cout<<s[a];
		}
		else if(a%10==0){
			cout<<s[a/10]<<" puluh ";
		}
		else if(a%10!=0){
			cout<<s[a/10]<<" puluh "<<s[a%10];
		}
}
