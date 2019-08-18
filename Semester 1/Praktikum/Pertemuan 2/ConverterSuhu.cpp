#include <iostream>

using namespace std;

float c,r,k,f;

int main(){
	cout<<"PROGRAM CONVERTER SUHU"<<endl;
	cout<<"Masukkan nilai dalam derajat Celcius = ";
	cin>>c;
	r=c*4/5;
	k=273+c;
	f=(c*9/5)+32;
	cout<<endl;
	cout<<"Nilai dalam derajat Reamur = "<<r<<endl;
	cout<<"Nilai dalam derajat Kelvin = "<<k<<endl;
	cout<<"Nilai dalam derajat Fahrenheit = "<<f<<endl;
	return 0;
}
