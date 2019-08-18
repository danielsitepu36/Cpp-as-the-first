#include<iostream>
using namespace std;

int main(){
    bool found=false;
    int data[]={0,1,2,3,4,5,6,7,8,9};
    int i=0,j=sizeof(data)/sizeof(data[0]),k,query=7;
    while(!found && i<=j){
        k=(i+j)/2;
        if(data[k]<query){
            i=k+1;
        }
        else if(data[k]==query){
            found=true;
        }
        else{
            j=k-1;
        }
    }
    if(!found){
        cout<<"Tidak Ditemukan.";
    }
    else{
        cout<<"Ditemukan";
    }
    return 0;
}