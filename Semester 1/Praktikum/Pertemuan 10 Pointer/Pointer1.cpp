#include<iostream>
using namespace std;
int Budi;
int Dodi;
int *Rani;
int *Sari;
int main(){
    Budi=75;
    cout<<"Budi = "<<Budi<<endl;
    cout<<"&Budi = "<<&Budi<<endl;

    Dodi=Budi;
    cout<<"Dodi = "<<Dodi<<endl;
    cout<<"&Dodi = "<<&Dodi<<endl;

    Rani=&Budi;
    cout<<"*Rani = "<<*Rani<<endl;
    cout<<"Rani = "<<Rani<<endl;

    Sari=Rani;
    cout<<"*Sari = "<<*Sari<<endl;
    cout<<"Sari = "<<Sari<<endl;

    /*Output :
    Budi = 75
    &Budi = 0x407020
    Dodi = 75
    &Dodi = 0x407024
    *Rani = 75
    Rani = 0x407020
    *Sari = 75
    Sari = 0x407020*/

    return 0;
}