#include <iostream>
using namespace std;

int main(){
	
	string a,b;
	
	cout<<"Username : ";
	cin>>a;
	cout<<"Password : ";
	cin>>b;
	
	if(a=="mawar" && b=="melati")
	{
		cout<<"Selamat Anda berhasil login";
	}
	else if(a!="mawar" && b=="melati")
	{
		cout<<"Username Salah";
	}
	else if(a=="mawar" && b!="melati")
	{
		cout<<"Password Salah";
	}
	else{
		cout<<"Semua salah !";
	}
}
