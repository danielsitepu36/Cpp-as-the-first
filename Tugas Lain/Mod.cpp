#include <iostream>
using namespace std;

int main(){
	int a,x=0;
	cin>>a;
	for(int i=;i<=a;i++){
		if(i%4==3 && i%17==14 && i%3==1){
			cout<<i<<endl;
			x++;
		}
	}
	cout<<x;
}
