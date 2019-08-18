#include <iostream>

using namespace std;

int main(){
	char n;
	int i, b, nilai, bobot;
	float sks, total, IP;
	cout<<"PROGRAM MENGHITUNG INDEKS PRESTASI"<<endl<<endl;
	i=1;
	do{
		cout<<"Entry nilai ke-"<<i<<", X untuk selesai: ";
		cin>>n;
		if(n=='A' || n=='a'){
			nilai=4;
		}
		else if(n=='B' || n=='b'){
			nilai=3;
		}
		else if(n=='C' || n=='c'){
			nilai=2;
		}
		else if(n=='D' || n=='d'){
			nilai=1;
		}
		else if(n=='E' || n=='e'){
			nilai=0;
		}
		else if(n=='X' || n=='x'){
			break;
		}
		else{
			nilai=-1;
			break;
		}
		
		cout<<"Entry bobot sks ke-"<<i<<": ";
		cin>>b;
		
		bobot=nilai*b;
		cout<<"Nilai "<<n<<" = "<<nilai<<", bobot = "<<bobot<<endl<<endl;
		sks+=b;
		total+=bobot;
		i++;
	} while (n!='X' || nilai !=-1);
	if(nilai==-1){
		cout<<"Input nilai salah !";
		goto end;
	}
	cout<<endl<<"Selesai"<<endl;
	cout<<"Jumlah SKS : "<<sks<<endl;
	cout<<"Jumlah bobot : "<<total<<endl;
	IP=total/sks;
	cout<<"IP Anda : "<<IP;
	end:
	return 0;
}
