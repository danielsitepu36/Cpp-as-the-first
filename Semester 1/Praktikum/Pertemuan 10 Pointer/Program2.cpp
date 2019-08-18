#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int count = 16, sum = 17, *x, *y;
    x=&sum;
    *x=27;
    y=x;
    x=&count;
    *x=count;
    sum=*x/2*3;
    printf("count = %d, sum = %d, *y = %d\n", count,sum,*x,*y);
    cout<<"x="<<*x<<endl;
    cout<<"sum**x="<<sum**x<<endl;
    /*output :
    count = 16, sum = 24, *y = 16
    x=16
    sum**x=384*/
} 