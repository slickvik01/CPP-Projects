#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
	string guess;
	srand(time(0));
	const string wordList[10] = {"march madness", "the avengers", "eat and sleep", "arachnid", "despicable me", "super bowl sunday", "bank of america", "grim reaper", "tyranasaurus rex", "peter pan" };
	string word = wordList[rand() % 10];
	int wordlength=word.length();
	cout << wordlength<<"\n \n";
	char wordsplit[wordlength];
	strcpy (wordsplit, word.c_str());
	// Doing the part above took me almost 1 hour to properly piece together with proper syntax. Whatevers below might be just as hard.
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
	// Took me some time to type this. Looks very easy. But I cracked my mind over this. I had to remember single quotes and I used the first letter for confirmation. Gave errors for almost an hour. Finally got it. 
	
	cout << "\n \n Now, type your first letter guess. It better be one letter. \n";
	cin >> guess;
	int a=1;
	int i=0;
	int j=0;
	while (a < 1000) {
		if (guess.length() == 1) {
			break;			
		}
		else {
			cout << "This isn't a single letter. Type in one letter only. \n";
			cin >> guess;
		}
	}
	/* while (i<wordlength) {
		if (wordsplit[i]==guess) {
			j++;
			i++;
			cout << j;
		}
		else {
			i++;
		}
	}
	 */
	
	return 0;
}