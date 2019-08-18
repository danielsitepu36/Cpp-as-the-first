#include <iostream>
using namespace std;

int main(){
	int n,i,a;
	cin>>n;
	for(i=5;i>0;i--){
		a=n%i;
		if(a!=0){
			cout<<"Bilangan tidak habis dibagi "<<i;
			break;
		}
	}
	if(a==0){
		cout<<"Bilangan habis dibagi 1-5";
	}
	return 0;
}
