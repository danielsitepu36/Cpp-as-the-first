#include<iostream>
using namespace std;

void triangle(int n){
	int x,y;
	for(int i=1;i<=n;i++){
		x=n-i;
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
}

int main(){
	int x;
	cout<<"Masukkan jumlah baris = ";
	cin>>x;
	triangle(x);
	return 0;
}
