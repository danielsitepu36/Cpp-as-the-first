#include<iostream>
using namespace std;

int inc(int number);

int main(){
	int n=8;
	cout<<"Before calling function, n is "<<n<<endl;
	int result=inc(n);
	cout<<"After calling function, n is "<<n<<endl;
	result=inc(n);
	cout<<"After calling function 2, n is "<<n<<endl;
	cout<<"Result is "<<result<<endl;
}

int inc(int number){
	++number;
	return number;
}
