#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	char word[256];
	int len;
	cout << "Give any word and I shall print it backwards" << endl;
	fgets(word,256,stdin);
	cout << "You entered: " << word << endl;
	len = strlen(word);
	while (len>0)
	{
		--len;
		cout << word[len];
	}
	 */
	
	string word;
	int len;
	cout << "Give any word and I shall print it backwards" << endl;
	getline(cin, word);
	cout << "You entered: " << word << endl;
	
	
	return 0;
}