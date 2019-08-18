#include <iostream>
using namespace std;

int Max=0,b=0,c=0,d=0;

int main(){
	/*INT MAXIMUM NUMBER
	cout<<"INT MAXIMUM NUMBER"<<endl;
	d=1;
	c=2;
	for(int i=1;i<=31;i++){
		d=d*c;
	}
	cout<<d-1<<endl<<endl<<endl;
	*/	
	
	/*PROGRAM JELAS*/
	cout<<"Masukkan angka 1 = ";
	cin>>Max;
	cout<<"Masukkan angka 2 = ";
	cin>>b;
	while (Max<b){
	if(Max<b){
		Max=b;
	}
	else{
		b=b+Max;
	}
	}
	cout<<endl<<"Angka anda = "<<Max;
	return 0;	
	
}
