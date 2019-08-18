#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

	char s1[100]={};
	char s2[100]={};

int main(){
	int a,n;
	
	cout<<"PROGRAM CASE ARRAY"<<endl;
	cout<<"Masukkan String 1"<<endl;
	cin>>s1;
	cout<<endl;
	cout<<"Masukkan String 2"<<endl;
	cin>>s2;
	cout<<endl;
	cout<<"Masukkan kasus ke-";
	cin>>a;
	
	switch (a){
		case 1:
			cout<<"strcpy = "<<strcpy(s1,s2)<<endl;
			cout<<"s1 = "<<s1<<endl;
			cout<<"s2 = "<<s2<<endl;
			break;
		case 2:
			cout<<"Masukkan n = ";
			cin>>n;
			cout<<"strncat = "<<strncat(s1,s2,n)<<endl;
			cout<<"s1 = "<<s1<<endl;
			cout<<"s2 = "<<s2<<endl;
			break;
		case 3:
			cout<<"Compare = "<<strcmp(s1,s2)<<endl;
			break;
		case 4:
			cout<<"Length = "<<endl;
			cout<<"s1="<<strlen(s1)<<endl;
			cout<<"s2="<<strlen(s2)<<endl;
			break;
	}
	return 0;
}
