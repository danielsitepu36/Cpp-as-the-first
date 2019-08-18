#include <iostream>
using namespace std;

int main(){
	char i, n;
	cout<<"PROGRAM MENAMPILKAN DERET HURUF"<<endl;
	cout<<"Masukkan batas = ";
	cin>>n;
	cout<<endl<<endl<<"Perulangan for"<<endl;
	for(i='A';i<=n;i++){
		cout<<i<<" ";
	}
	
	cout<<endl<<endl<<"Perulangan while"<<endl;
	i='A';
	while(i<=n){
		cout<<i<<" ";
		i++;
	}
	
	cout<<endl<<endl<<"Perulangan do while"<<endl;
	i='A';
	do{
		cout<<i<<" ";
		i++;
	} while (i<=n);
	return 0;
}
