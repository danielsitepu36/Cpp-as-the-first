#include<iostream>
#include<string.h>
using namespace std;

int main(){
    bool found=false;
    //ganti char = string
    char* nama[]={"Nana","Rudi","Dea","Ihsan","Tiara"};
    char* nomorInduk[]={"13507701","13507702","13507703","13507704","13507705"};
    char* query="13507703";
    float nilai[]={64.75,75.11,84.63,77.07,66.70};
    for(int i=0;i<5;i++){
        if(nomorInduk[i]==query){
            cout<<nama[i]<<","<<nomorInduk[i]<<","<<nilai[i]<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<"Tidak ditemukan";
    }
    return 0;
}