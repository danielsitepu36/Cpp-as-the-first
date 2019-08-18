#include<iostream>
#include<string.h>
using namespace std;

void rv(char str[], char umstr[]);

int main(){
    const int CNT = 81;
    char word[CNT], revword[CNT];
    cout<<"Enter a word : ";
    cin.width(CNT);
    cin>>word;
    rv(word,revword);
    cout<<"\nThe ... word : "<<revword<<endl;
    return 0;
}

void rv(char s1[], char s2[]){
    int j=0;
    for(int i=strlen(s1)-1;i>=0;i--){
        s2[j]=s1[i];j++;
    }
    s2[j]='\0';
}
//input : Pemgrograman
//output : namargormeP, cuma bisa 1 kata