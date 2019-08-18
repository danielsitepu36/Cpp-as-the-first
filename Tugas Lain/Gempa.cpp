#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	int a=0,b=0,c=0,d=0,e=0;
	int n=0,i=0;
	float m;

	srand(time(0));
	cout<<"PROGRAM PEMODELAN SKALA GEMPA BUMI"<<endl;
	cout<<"Masukkan jumlah magnitudo gempa yang diinginkan = ";
	cin>>n;
	cout<<endl;
	
	n=n-1;
	float x[n];
	float x1[n];
	float x2[n];
	float x3[n];
	float x4[n];
	float x5[n];
	n=n+1;
	
	cout<<"Magnitudo Gempa = "<<endl;
	for(i=0;i<n;i++){
		m=rand() % 1001/100.00 ;
		x[i]=m;
		cout<<m<<" ";
		if (x[i]>8){
			x1[a]=x[i];
			a=a+1;
			}
		else if (x[i]>=6){
			x2[b]=x[i];
			b=b+1;
			}
		else if (x[i]>=5){
			x3[c]=x[i];
			c=c+1;
			}
		else if (x[i]>=4){
			x4[d]=x[i];
			d=d+1;
			}
		else {
			x5[e]=x[i];
			e=e+1;
		}
	}

	cout<<endl<<endl;
	cout<<"Gempa yang termasuk gempa sangat besar (>8SR) = ";
	for(i=0;i<a;i++){
		cout<<x1[i]<<" ";
	}
	cout<<endl;
	cout<<"Gempa yang termasuk gempa besar (6-8SR) = ";
	for(i=0;i<b;i++){
		cout<<x2[i]<<" ";
	}
	cout<<endl;
	cout<<"Gempa yang termasuk gempa merusak (5-6SR) = ";
	for(i=0;i<c;i++){
		cout<<x3[i]<<" ";
	}
	cout<<endl;
	cout<<"Gempa yang termasuk gempa sedang (4-5SR) = ";
	for(i=0;i<d;i++){
		cout<<x4[i]<<" ";
	}
	cout<<endl;
	cout<<"Gempa yang termasuk gempa kecil/mikro (<4SR) = ";
	for(i=0;i<e;i++){
		cout<<x5[i]<<" ";
	}
	return 0;
}
