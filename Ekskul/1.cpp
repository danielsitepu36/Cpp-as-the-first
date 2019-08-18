#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        int k=i & (i<<1);
        if(k)
            printf("%d, ", i);
    }
}