#include<iostream>
#include<iomanip>
using namespace std;

char play[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char numboard[9]={'1','2','3','4','5','6','7','8','9'};

void board(char a[]){
	cout<<endl;
	cout<<"|---|---|---|"<<endl;
	cout<<"| "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<" |"<<endl;
	cout<<"|---|---|---|"<<endl;
	cout<<"| "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<" |"<<endl;
	cout<<"|---|---|---|"<<endl;
	cout<<"| "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<" |"<<endl;
	cout<<"|---|---|---|"<<endl;
	cout<<endl;
}

void header(){
	cout<<"PROJECT OX : TIC TAC TOE"<<endl;
	cout<<"This is Daniel's first project !"<<endl;
	cout<<"Have a nice play !"<<endl;
	cout<<"================================"<<endl;
	cout<<"Main Board & Calling System Use A Number, ex :"<<endl;
	board(numboard);
}

void pturn(int &game, int &turn, char &fill){
	if(game%2==1){
		if(turn%2==1){
			cout<<"It is Player1 turn now !";
			fill='O';
		}
		else{
			cout<<"It is Player2 turn now !";
			fill='X';
		}
	}
	else{
		if(turn%2==1){
			cout<<"It is Player2 turn now !";
			fill='X';
		}
		else{
			cout<<"It is Player1 turn now !";
			fill='O';
		}
	}
}

void aiturn(int &game, int &turn, char &fill){
	if(game%2==1){
		if(turn%2==1){
			cout<<"It is Player1 turn now !";
			fill='O';
		}
		else{
			cout<<"It is Player2 turn now !";
			fill='X';
		}
	}
	else{
		if(turn%2==1){
			cout<<"It is Player2 turn now !";
			fill='X';
		}
		else{
			cout<<"It is Player1 turn now !";
			fill='O';
		}
	}
}

int wincheck(char a[]){
	if((a[0]=='O'&&a[3]=='O'&&a[6]=='O')||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O')||
	(a[0]=='O'&&a[1]=='O'&&a[2]=='O')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||(a[6]=='O'&&a[7]=='O'&&a[8]=='O')||
	(a[0]=='O'&&a[4]=='O'&&a[8]=='O')||(a[2]=='O'&&a[4]=='O'&&a[6]=='O')){
		return 1;
	}
	else if((a[0]=='X'&&a[3]=='X'&&a[6]=='X')||(a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[2]=='X'&&a[5]=='X'&&a[8]=='X')||
	(a[0]=='X'&&a[1]=='X'&&a[2]=='X')||(a[3]=='X'&&a[4]=='X'&&a[5]=='X')||(a[6]=='X'&&a[7]=='X'&&a[8]=='X')||
	(a[0]=='X'&&a[4]=='X'&&a[8]=='X')||(a[2]=='X'&&a[4]=='X'&&a[6]=='X')){
		return 2;
	}
	else{
		return 0;
	}
}

void pwincheck(int win,int &p1score,int &p2score){
	if(win==1){
		cout<<"Player1 win the game !"<<endl;
		p1score++;
	}
	else if(win==2){
		cout<<"Player2 win the game !"<<endl;
		p2score++;
	}
	else{
		cout<<"DRAW !"<<endl;
	}
}

void comwincheck(int win,int &p1score,int &p2score){
	if(win==1){
		cout<<"Player win the game !";
		p1score++;
	}
	else if(win==2){
		cout<<"Computer win the game !";
		p2score++;
	}
	else{
		cout<<"DRAW !";
	}
}

void showscore(int game,int p1score, int p2score){
	int w=7;
	cout<<"============SCORE============"<<endl;
    cout<<setw(w)<<"Game |"<<setw(w)<<"P1Score |"<<setw(w)<<"P2Score |"<<endl;
	cout<<setw(w-2)<<game<<" |"<<setw(w)<<p1score<<" |"<<setw(w)<<p2score<<" |"<<endl;
    cout<<"============================="<<endl;
}

int aimove1(char a[],int num,char fillp,char fillai){
	//winmove
	if(((a[0]=='X'&&a[3]=='X')||(a[2]=='X'&&a[4]=='X')||(a[7]=='X'&&a[8]=='X'))&&a[6]==' '){
		return 6;
	}
	else if(((a[1]=='X'&&a[2]=='X')||(a[4]=='X'&&a[8]=='X')||(a[3]=='X'&&a[6]=='X'))&&a[0]==' '){
		return 0;
	}
	else if(((a[0]=='X'&&a[1]=='X')||(a[6]=='X'&&a[4]=='X')||(a[8]=='X'&&a[5]=='X'))&&a[2]==' '){
		return 2;
	}
	else if(((a[2]=='X'&&a[5]=='X')||(a[0]=='X'&&a[4]=='X')||(a[6]=='X'&&a[7]=='X'))&&a[8]==' '){
		return 8;
	}
	else if(((a[0]=='X'&&a[6]=='X')||(a[4]=='X'&&a[5]=='X'))&&a[3]==' '){
		return 3;
	}
	else if(((a[0]=='X'&&a[2]=='X')||(a[4]=='X'&&a[7]=='X'))&&a[1]==' '){
		return 1;
	}
	else if(((a[2]=='X'&&a[8]=='X')||(a[3]=='X'&&a[4]=='X'))&&a[5]==' '){
		return 5;
	}
	else if(((a[1]=='X'&&a[4]=='X')||(a[6]=='X'&&a[8]=='X'))&&a[7]==' '){
		return 7;
	}
	//blocker
	if(((a[0]=='X'&&a[3]=='X')||(a[2]=='X'&&a[4]=='X')||(a[7]=='X'&&a[8]=='X'))&&a[6]==' '){
		return 6;
	}
	else if(((a[1]=='X'&&a[2]=='X')||(a[4]=='X'&&a[8]=='X')||(a[3]=='X'&&a[6]=='X'))&&a[0]==' '){
		return 0;
	}
	else if(((a[0]=='X'&&a[1]=='X')||(a[6]=='X'&&a[4]=='X')||(a[8]=='X'&&a[5]=='X'))&&a[2]==' '){
		return 2;
	}
	else if(((a[2]=='X'&&a[5]=='X')||(a[0]=='X'&&a[4]=='X')||(a[6]=='X'&&a[7]=='X'))&&a[8]==' '){
		return 8;
	}
	else if(((a[0]=='X'&&a[6]=='X')||(a[4]=='X'&&a[5]=='X'))&&a[3]==' '){
		return 3;
	}
	else if(((a[0]=='X'&&a[2]=='X')||(a[4]=='X'&&a[7]=='X'))&&a[1]==' '){
		return 1;
	}
	else if(((a[2]=='X'&&a[8]=='X')||(a[3]=='X'&&a[4]=='X'))&&a[5]==' '){
		return 5;
	}
	else if(((a[1]=='X'&&a[4]=='X')||(a[6]=='X'&&a[8]=='X'))&&a[7]==' '){
		return 7;
	}
}

int main(){
	gamechoice:
	system("CLS");
	int x=0,i=0,turn=1,win=0,num=0,p1score=0,p2score=0,game=1,reask=0;
	char fill;
	header();
	cout<<"================================"<<endl;
	cout<<"1) PLayer1 vs Player2"<<endl;
	cout<<"2) Player1 vs Computer (Under Development)"<<endl;
	cout<<"Your Choice : ";
	cin>>x;
	if(x==1){
		twoplayer:
		char play[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
		win=0;
		turn=1;
		while(win==0 && turn!=10){
			system("CLS");
			header();
			board(play);
			cout<<"================================"<<endl;
			pturn(game,turn,fill);
			fill2p:
			cout<<endl;
			cout<<"Where do you want to place your "<<fill<<" ? (1-9)"<<endl;
			cout<<"= ";
			cin>>num;
			num--;
			if(num>8){
				cout<<"You must fill it with number 1-9 !";
				goto fill2p;
			}
			if(play[num]!=' '){
				cout<<"Sorry, the place already filled !";
				goto fill2p;
			}
			play[num]=fill;
			board(play);
			win=wincheck(play);
			turn++;
		}
		pwincheck(win,p1score,p2score);
		showscore(game,p1score,p2score);
		game++;
		cout<<"Menu : 1) Play Again"<<endl;
		cout<<"       2) Reset Game"<<endl;
		cout<<"Your choice = ";
		cin>>reask;
		if(reask==1){
			goto twoplayer;
		}
		else{
			goto gamechoice;
		}
	}
	else if(x==2){
		complayer:
		char play[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
		win=0;
		turn=1;
		num=-1;
		while(win==0 && turn!=10){
			system("CLS");
			header();
			board(play);
			cout<<"================================"<<endl;
			aiturn(game,turn,fill);
			fillai:
			cout<<endl;
			cout<<"Where do you want to place your "<<fill<<" ? (1-9)"<<endl;
			cout<<"= ";
			cin>>num;
			num--;
			if(num>8){
				cout<<"You must fill it with number 1-9 !";
				goto fillai;
			}
			if(play[num]!=' '){
				cout<<"Sorry, the place already filled !";
				goto fillai;
			}
			play[num]=fill;
			board(play);
			win=wincheck(play);
			turn++;
		}
		comwincheck(win,p1score,p2score);
		showscore(game,p1score,p2score);
		game++;
		cout<<"Menu : 1) Play Again"<<endl;
		cout<<"       2) Reset Game"<<endl;
		cout<<"Your choice = ";
		cin>>reask;
		if(reask==1){
			goto complayer;
		}
		else{
			goto gamechoice;
		}
	}
	else{
		cout<<"Wrong Input !"<<endl;
		goto gamechoice;
	}
	system("PAUSE");
	return 0;
}