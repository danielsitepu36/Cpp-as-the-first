#include<iostream>
using namespace std;

float x,y;

struct titik_tengah{
    float absis;
    float ordinat;
};

titik_tengah titik[2];

int main(){
    cout<<"Masukkan absis (x) pertama = ";
    cin>>titik[0].absis;
    cout<<"Masukkan ordinat (y) pertama = ";
    cin>>titik[0].ordinat;
    cout<<"Masukkan absis (x) kedua = ";
    cin>>titik[1].absis;
    cout<<"Masukkan ordinat (y) kedua = ";
    cin>>titik[1].ordinat;
    x=(titik[0].absis+titik[1].absis)/2;
    y=(titik[0].ordinat+titik[1].ordinat)/2;
    cout<<"Titik Tengah = ";
    cout<<"("<<x<<","<<y<<")";
}