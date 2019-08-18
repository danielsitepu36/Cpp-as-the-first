#include <iostream>
using namespace std;

int main(){
	int i, n;
	cout<<"PROGRAM MENAMPILKAN DERET ANGKA"<<endl;
	cout<<"Masukkan batas = ";
	cin>>n;
	cout<<endl<<endl<<"Perulangan for"<<endl;
	for(i=1;i<=n;i++){
		cout<<i<<" ";
	}
	
	cout<<endl<<endl<<"Perulangan while"<<endl;
	i=1;
	while(i<=n){
		cout<<i<<" ";
		i++;
	}
	
	cout<<endl<<endl<<"Perulangan do while"<<endl;
	i=1;
	do{
		cout<<i<<" ";
		i++;
	} while (i<=n);
	return 0;
}
