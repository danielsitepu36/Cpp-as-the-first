#include<iostream>
using namespace std;

double triangle(double a, double t){
	return (a*t)/2;
}

double circle(double r){
	return r*r*3.14;
}

double square(double r){
	return r*r;
}

int main(){
	int x,a,t,r,L;
	cout<<"CALCULATE AREA"<<endl;
	cout<<"Menu :"<<endl;
	cout<<"1) Triangle"<<endl;
	cout<<"2) Circle"<<endl;
	cout<<"3) Square"<<endl;
	cout<<"Pilihan anda = ";\
	cin>>x;
	switch(x){
		case 1:
			cout<<"Masukkan alas = ";
			cin>>a;
			cout<<"Masukkan tinggi = ";
			cin>>t;
			L=triangle(a,t);
			cout<<"Luas = "<<L;
			break;
		case 2:
			cout<<"Masukkan panjang jari-jari = ";
			cin>>r;
			L=circle(r);
			cout<<"Luas = "<<L;
			break;
		case 3:
			cout<<"Masukkan panjang sisi = ";
			cin>>r;
			L=square(r);
			cout<<"Luas = "<<L;
			break;
	}
	return 0;
}
