#include<iostream>
using namespace std;

int main(){
    string a;
    cout<<"Masukkan Kata = ";
    cin>>a;
    int size=a.length();
    cout<<endl;
    for(int i=size;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}