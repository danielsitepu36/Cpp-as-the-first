#include <iostream>
using namespace std;

int main(){
	int nested1, nested2;
	int awal1=1, awal2;
	cout<<"Masukkan nilai nested1 = ";
	cin>>nested1;
	cout<<"Masukkan nilai nested2 = ";
	cin>>nested2;
	
	if(nested1>0 && nested2>0){
		while (awal1<=nested1){
			for(awal2=1;awal2<=nested2;awal2++){
				cout<<"Perulangan ke-"<<awal1*awal2<<endl;
			}
			awal1++;
		}
	}
}
