#include <iostream>
using namespace std;

int main(){
	long n,m,jum,a,i;
	n=0;m=0;jum=0;a=0;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a;
		jum+=a;
	}
	if(jum%m==0){
		cout<<"Subarashii :)"<<endl;
	}
	else{
		cout<<"Watashi Sedih :("<<endl;
	}
	return 0;
}
