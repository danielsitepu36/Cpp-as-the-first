#include<iostream>
#include<math.h>
using namespace std;

float sum,sumdev,rata,ratadev,deviasi;
int x=30;

void dev_standar(float A[], float jarak[], int x){
    for(int i=0;i<x;i++){
        sum+=A[i];
    }
    rata=sum/x;
    for(int i=0;i<x;i++){
        jarak[i]=A[i]-rata;
        jarak[i]=jarak[i]*jarak[i];
    }
    for(int i=0;i<x;i++){
        sumdev+=jarak[i];
    }
    deviasi=sumdev/x;
    deviasi=sqrt(deviasi);

    /*cout<<endl<<rata<<endl;
    for(int i=0;i<x;i++){
        cout<<jarak[i]<<" ";
    }
    cout<<endl<<sumdev;
    cout<<endl<<sumdev/x;*/
    cout<<endl<<deviasi;
}

int main(){
    float A[x];
    float jarak[x];
    cout<<"Masukkan 30 Angka = "<<endl;
    for(int i=0;i<x;i++){
        cin>>A[i];
    }
    dev_standar(A,jarak,x);
}