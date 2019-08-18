#include <iostream>
#include <algorithm>
using namespace std;

long x[1000001];
long y[1000001];

int main(){
	long a,b,n,i,k,l;
	long pos=0,neg=0;
	
	cin>>n;
	
	if(n==2){
		cin>>k>>l;
		if(k*l>0){
			cout<<k*l<<endl;
		}
		else{
			cout<<":( tidak ada"<<endl;
		}
		goto akhir;
	}
	
	a=0;
	b=0;
	for(i=0;i<n;i++){
		cin>>k;
		if(k>0){
			x[a]=k;
			a++;
		}
		else if(k<0){
			y[b]=k;
			b++;
		}
	}
	
	sort(x,x+a);
	sort(y,y+b);
	
	pos=x[0]*x[1];
	neg=y[b-1]*y[b-2];
	

	if((pos==0) && (neg!=0)){
		cout<<neg<<endl;
	}
	else if((pos!=0) && (neg==0)){
		cout<<pos<<endl;
	}
	else if((pos==0) && (neg==0)){
		cout<<":( tidak ada"<<endl;		
	}
	else if(neg<pos){
		cout<<neg<<endl;
	}
	else{
		if(pos<neg){
			cout<<pos<<endl;
		}
		else{
			cout<<neg<<endl;
		}
	}
		
	akhir:
	return 0;
}
