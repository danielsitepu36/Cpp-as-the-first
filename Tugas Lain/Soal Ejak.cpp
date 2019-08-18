#include <iostream>
using namespace std;

int c, h;

int main(){
	cout<<"Masukkan Jumlah Atom C = ";
	cin>>c;
	cout<<"Masukkan Jumlah Atom H = ";
	cin>>h;
	
	cout<<"Rumus Senyawa Tersebut Adalah : C"<<c<<"H"<<h<<endl;
	for(int i=1;i<=c;i++){
		cout<<"C";
	}
	for(int j=1;j<=h;j++){
		cout<<"H";
	}
	cout<<endl;
	if((c*2)+2==h){
		cout<<"Alkana";
	}
	else if((c*2)==h){
		cout<<"Alkuna";
	}
	else if((c*2)-2==h){
		cout<<"Alkena";
	}
	return 0;
}
