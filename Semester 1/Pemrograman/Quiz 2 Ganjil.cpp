#include <iostream>
using namespace std;

int main(){
	int a,i;
	i=0;a=0;
	cout<<"Masukkan 5 Bilangan Ganjil !"<<endl;
	do {
		cin>>a;
		if(a==0){
			break;
		}
		else if(a%2!=0){
			i++;
		}
		else{
			cout<<"Anda Memasukkan Bilangan Genap, Harap Ulangi !"<<endl;
		}
	} while (i!=5);
	if(a==0){
		cout<<"Anda Keberatan";
	}
	else{
		cout<<"Anda telah memasukkan 5 bilangan ganjil";
	}
	return 0;
}
