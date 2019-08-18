#include<iostream>
using namespace std;

int main(){
    float A[6]={1.0,2.0,1.0,0.5,3.0,2.0};
    float *theMin=&(A[0]);
    float *walker=&(A[1]);

    while (walker<&(A[6])){
        if(*walker<*theMin)
        theMin=walker;
        cout<<"theMin = "<<*theMin<<" -- Walker = "<<*walker<<endl;
        walker=walker+1;
    }
    cout<<*theMin<<endl;
    cout<<*walker+2*3<<endl;
    return 0;
    /*output :
    theMin = 1 -- Walker = 2
    theMin = 1 -- Walker = 1
    theMin = 0.5 -- Walker = 0.5
    theMin = 0.5 -- Walker = 3
    theMin = 0.5 -- Walker = 2
    0.5
    6*/
}