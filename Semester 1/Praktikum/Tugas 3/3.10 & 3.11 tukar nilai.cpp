#include<iostream>
using namespace std;

int main(){
	//Kita ingin menukar isi dari variabel berikut
	int x=10;
	int y=33;
	//perlu 1 variabel pembantu
	int z=0;
	
	cout<<"Inisialisasi"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	
	//Pindahkan nilai var x ke var z
	z=x;
	cout<<"\nPertukaran pertama x ke z"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	
	//Pindahkan nilai var y ke var x
	x=y;
	cout<<"\nPertukaran kedua y ke x"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	
	//Pindahkan nilai var z ke var y
	y=z;
	cout<<"\nPertukaran ketiga z ke y"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	return 0;
}
