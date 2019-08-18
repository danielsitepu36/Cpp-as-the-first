#include<iostream>
using namespace std;

int main(){
	int b;
	float jumlah = 0;
	cout<<"Masukkan nilai b = ";
	cin>>b;
	
	if(b>10)
		jumlah=jumlah + b;
	else
		jumlah=jumlah-b;
	
	cout<<"Jumlah = "<<jumlah<<endl;
	return 0;
}
