//Hangman beta version Created by:Yusuf Mutlu
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iterator> // for iterators 
#include<vector>
using namespace std;
int main(){
	vector<string> arr3;
	srand(time(NULL));
	int selection,i,tah=0,yan=0,y=0,q=0,yan1=0;
	string name,computer,tahmin,kullandiginiz="",yn;
	char letter;
	cout << "----------Welcome to the hangman game----------"<<endl;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello, "<<name<<" please select your mode we have : 1-Playing with your own word ,2-Computers word: 1-2?";
	cin >> selection ;
	if(selection == 2){
		string array1[] = {"computer","programming","home","sweet","game","hangman"};
		int rand1 = rand() %sizeof(array1)/sizeof(string);
		computer = array1[rand1];
		char comp[computer.size()+1];
		strcpy(comp,computer.c_str());
		for(unsigned int a = 0;a<strlen(comp);a++)	{
			arr3.push_back("_ ");}
		for(auto g=arr3.begin();g!=arr3.end();++g){
			cout<< *g;
		}
		cout<<endl;
		while(yan!=8 and tah!=strlen(comp)){
			cout<<"if you want to make a estimate the word then click yes or you want to estimate letter then click no [Y/N]: "; 
			cin>>yn;
			if(yn=="n"){	
				cout<<"you used: "<<kullandiginiz<<endl;
				cout<<"enter a letter: ";
				cin>>letter;
				char s[kullandiginiz.size()+1];
				strcpy(s,kullandiginiz.c_str());
				for(unsigned int b = 0;b<strlen(comp);b++){
					if(letter==comp[b]){
						arr3[b]=letter;
						for(auto g=arr3.begin();g!=arr3.end();++g){
							cout<< *g;}
						tah++;
						cout<<endl;
						
					}				
				}
				
				string p="@";
				p=find(s,s+4,letter);
				if(p!="@"){
					kullandiginiz+=letter;
				}
			}
		
			else if(yn=="y"){
				cout<<"Enter your estimate: ";
				cin>>tahmin;
				if(tahmin==computer){
					cout<<endl<<"YOU WON.";
					break;
				}
				else{
					yan1++;
					cout<<"Wrong."<<endl;
				}
			}
			else{
				cout<<endl<<"Please enter y or n."<<endl;
			}
				
		}
		if(tah==strlen(comp)){
			cout<<"YOU WON.";
		}
		else if(yan==8){
			cout<<endl<<"Game Over.";
		}
	}
	else if(selection==1){
		int t=0;
		vector<string> arrs;
		string player1,player2,word,es;
		cout<<"Enter  your name player 1 : ";
		cin>>player1;
		cout<<"Enter  your name player 2 : ";
		cin>>player2;
		cout<<"Enter your word "<<player1<<": ";
		cin>>word;
		char wordc[word.size()+1];
		strcpy(wordc,word.c_str());
		for(int aw=0;aw<=strlen(wordc);++aw){
			arrs.push_back("_ ");
		}
		for(auto sw=arrs.begin();sw!=arrs.end();++sw){
			cout<<*sw;
		}
		cout<<endl;
		while((es!=word) and t!=strlen(wordc)){
			cout<<"Enter your estimate "<<player2<<": ";
			cin>>es;
			for(int sd=0;sd<=strlen(wordc);sd++){
				if(es[sd]==word[sd]){
					arrs[sd]=es[sd];
					for(auto ww=arrs.begin();ww!=arrs.end();++ww){
						cout<<*ww;
					t++;
					}
					cout<<endl;
				}
			}
			}
		}
		cout<<"You won";
	getch();	
}
