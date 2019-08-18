#include <iostream>
using namespace std;

int f(int x){
	return x*x;
}

void hai(int x){
	for(int i=0;i<x;i++){
		cout<<"Hai"<<endl;
	}
}

void tukar(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}

int fibbo(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return fibbo(n-1)+fibbo(n-2);
	}
}

int faktorial(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*faktorial(n-1);
	}
}

int main(){
	int x,a,b,n;
	cout<<"Masukkan angka = ";
	cin>>x;
	cout<<"Fungsi Kuadrat"<<endl;
	cout<<"Hasil = "<<f(x)<<endl;
	cout<<"================="<<endl;
	cout<<"Fungsi Void"<<endl;
	hai(x);
	cout<<"================="<<endl;
	cout<<"Fungsi Tukar"<<endl;
	cout<<"Masukkan a = ";
	cin>>a;
	cout<<"Masukkan b = ";
	cin>>b;
	tukar(a,b);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"================="<<endl;
	cout<<"Fungsi Recursif Fibbo"<<endl;
	cout<<"Masukkan nilai n = "<<endl;
	cin>>n;
	cout<<fibbo(n);
	cout<<"================="<<endl;
	cout<<"Fungsi Recursif Faktorial"<<endl;
	cout<<"Masukkan nilai n = "<<endl;
	cin>>n;
	cout<<faktorial(n);
	return 0;
}
