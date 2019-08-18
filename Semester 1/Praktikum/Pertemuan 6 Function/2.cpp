#include<iostream>
using namespace std;

int maximum(int,int);

int main(){
	cout<<maximum(5,8)<<endl;
	
	int a=6,b=9,c;
	c=maximum(a,b);
	cout<<c<<endl;
	
	cout<<maximum(c,99)<<endl;
}

int maximum(int num1,int num2){
	return (num1>num2)?num1:num2;
}
