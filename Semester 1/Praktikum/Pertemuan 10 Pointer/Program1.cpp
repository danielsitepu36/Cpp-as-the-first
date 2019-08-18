#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int x = 3,y = 4;
    int *ip;
    ip=&x;
    y=*ip;
    x=10;
    *ip=3;
    printf("x = %d, y = %d", x, y);
    return 0;
    //output : x=3 y=3
}