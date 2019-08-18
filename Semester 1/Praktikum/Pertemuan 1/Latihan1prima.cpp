#include <iostream>
#include <math.h>
using namespace std;

int a, b, i;

int main(){
		cout<<"PROGRAM MENENTUKAN BILANGAN PRIMA"<<endl;
		cout<<"Masukkan angka yang akan dicek ke-primaannya : ";
		cin >>a;
		i=1;
		if(a<2){
			cout<<endl;
			cout<<a<<" Bukan Merupakan Bilangan Prima";
			return 0;
		}	
		for (b=2;b<=sqrt(a);b++){
			if (a==2){
			break;
			}
			if (a%b==0){
				i=0;
				break;
			}
		}
		if(i==1){
			cout<<endl;
			cout<<a<<" Merupakan Bilangan Prima";
		}
		else{
			cout<<endl;
			cout<<a<<" Bukan Merupakan Bilangan Prima";
		}
	return 0;
}
