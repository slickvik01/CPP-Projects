#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int a=1;
int b=1;

int main() {
	string guess;
	srand(time(0));
	const string wordList[10] = {"march madness", "the avengers", "eat and sleep", "arachnid", "despicable me", "super bowl sunday", "bank of america", "grim reaper", "tyranasaurus rex", "peter pan" };
	string word = wordList[rand() % 10];
	int wordlength=word.length();
	char wordsplit[wordlength];
	char wordprint[wordlength];
	strcpy (wordsplit, word.c_str());
<<<<<<< HEAD
	cout << "This is the word or phrase that you have to guess. Guess the \n letters and if your correct, it'll be filled in. If not, a \n body part will be attached. Head, body, left arm, right arm, left leg, and finally right \n leg. After this, you lose. Good luck \n \n";
	if (wordsplit[0]=='m') {
		cout << "___ ___ ___ ___ ___ \t ___ ___ ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[0]=='t') {
		cout << "___ ___ ___ \t ___ ___ ___ ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[0]=='e') {
		cout << "___ ___ ___ \t  ___ ___ ___ \t  ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[0]=='a') {
		cout << "___ ___ ___ ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[0]=='d') {
		cout << "___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \t ___ ___ \n";
	}
	if (wordsplit[0]=='s') {
		cout << "___ ___ ___ ___ ___ \t ___ ___ ___ ___ \t ___ ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[0]=='b') {
		cout << "___ ___ ___ ___ \t ___ ___ \t ___ ___ ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[0]=='g') {
		cout << "___ ___ ___ ___ \t  ___ ___ ___ ___ ___ ___ \n";
	}
	if (wordsplit[1]=='y') {
		cout << "___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ \t ___ ___ ___ \n";
	}
	if (wordsplit[0]=='p') {
		cout << "___ ___ ___ ___ ___ \t ___ ___ ___";
	}
		
	cout << "\n \n Now, type your first letter guess. It better be one letter. \n";
	cin >> guess;
	int a=1;
	int i=0;
	while (a < 1000) {
		if (guess.length() == 1) {
			break;			
		}
		else {
			cout << "This isn't a single letter. Type in one letter only. \n";
			cin >> guess;
			
		}
	}
	/*
	while (i<wordlength) {
		if (wordsplit[i]==guess) {
			
			i++;
=======
	cout << "This is the word or phrase that you have to guess. Guess the \n letters and if your correct, it'll be filled in. If not, a \n body part will be attached. Head, \n body, left arm, right arm, left leg, and finally right \n leg. After this, you lose. Good luck \n \n";  

	cout << "\n \n \n";

	for (int x=0; x < wordlength; x++) {
		if (wordsplit[x]==' ') {
			cout << "\t";
			wordprint[x]= '\t';
		}
		else {
			cout << "_ ";
			wordprint[x]= '_';
		}
	}
	
	cout<<endl;
	
	char userinput;
	while (true) {
		bool done=true;
		userinput=getchar();
		for (a=0;a<wordlength;a++) {
			if (wordsplit[a]==userinput) {
				wordprint[a]= userinput;
			}
			if(wordprint[a]=='_')
			{
				done=false;
			}
>>>>>>> FETCH_HEAD
		}
		cout<<endl<<endl;
		//cout<<wordprint<<endl;
		for(int i=0;i<wordlength;i++)
		{
			if(wordprint[i]!='\t')
				cout<<wordprint[i]<< " ";
			else
				cout<<wordprint[i];
		}
		cout<<endl;
		if(done) break;
	}
	return 0;
}