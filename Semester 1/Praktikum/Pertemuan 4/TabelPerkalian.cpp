#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i, n, a, b, x;
	cout<<"PROGRAM MENAMPILKAN TABEL PERKALIAN"<<endl;
	cout<<"Masukkan batas = ";
	cin>>n;
	cout<<endl<<endl;
	x=5;
	
	cout<<setw(x)<<"*";
	for(a=1;a<=n;a++){
		cout<<setw(x)<<a;
	}
	cout<<endl;

	for(a=1;a<=n;a++){
		cout<<setw(x)<<a;
		for(b=1;b<=n;b++){
			cout<<setw(x)<<b*a;
		}
		cout<<endl;
	}
	return 0;
}
