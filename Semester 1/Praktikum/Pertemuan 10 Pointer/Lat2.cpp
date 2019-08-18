#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char a[]={"Gadjah Mada"};
    char *b;
    b=&a[3];
    cout<<*b;
    //output : j
    return 0;
}