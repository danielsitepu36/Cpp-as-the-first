#include<iostream>
using namespace std;
const int MAX = 6;

int main(){
    int var[MAX]={100,200,300,400,500,600};
    int *ptr;

    ptr=var;
    for(int i=0;i<MAX;i++){
        *ptr=*ptr-50;
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
    //output : 50    150    250    350    450    550
}