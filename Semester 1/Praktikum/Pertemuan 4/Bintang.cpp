#include <iostream>
using namespace std;

int main(){
	int b=0,x=0,i=0,bintang=0,y=0;
	cout<<"PROGRAM MENAMPILKAN DIAMOND"<<endl;
	cout<<"Masukkan jumlah baris diamond yang diinginkan = ";
	cin>>b;
	cout<<endl<<endl;
	cout<<"Diamond 1"<<endl;
	for(i=1;i<=b;i++){
		x=b-i;
		y=0;
		while(x>0){
			cout<<" ";
			x--;
		}
		while(y<i){
			cout<<"* ";
			y++;
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"DIAMOND 2"<<endl;
	for(i=1;i<=b;i++){
		x=1;
		y=0;
		while(x<i){
			cout<<" ";
			x++;
		}
		while(y<=b-i){
			cout<<"* ";
			y++;
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"DIAMOND 3"<<endl;
	for(i=1;i<b;i++){
		x=b-i;
		y=0;
		while(x>0){
			cout<<" ";
			x--;
		}
		while(y<i){
			cout<<"* ";
			y++;
		}
		cout<<endl;
	}
	for(i=1;i<=b;i++){
		x=1;
		y=0;
		while(x<i){
			cout<<" ";
			x++;
		}
		while(y<=b-i){
			cout<<"* ";
			y++;
		}
		cout<<endl;
	}
	return 0;
}
