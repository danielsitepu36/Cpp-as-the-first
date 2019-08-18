#include <iostream>

using namespace std;

int a,total,rata;

int main(){
	cout<<"PROGRAM MENENTUKAN RATA-RATA INPUT 5 NILAI"<<endl;
	cout<<"Masukkan nilai ke :"<<endl;
	for(int i=1;i<=5;i++){
		cout<<i<<" = ";
		cin>>a;
		total+=a;
	}
	rata=total/5;
	cout<<"Rata-rata data tersebut adalah = "<<rata;
	return 0;
}
