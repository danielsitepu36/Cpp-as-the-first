#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b;
    cout<<"Masukkan a = ";
    cin>>a;
    cout<<"Masukkan b = ";
    cin>>b;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
    return 0;
}