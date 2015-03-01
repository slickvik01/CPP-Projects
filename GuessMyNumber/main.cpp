#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
	const int answer=rand() % 100;
	int input;
	bool check = true;
	while(check==true) {	
		cout << "Between 1-100, guess my number: ";
		cin >> input;
		if (input > 100 || input < 1) {
			cout << "Your guess is not within 1-100" << endl;
		}
		if (input > answer) {
			cout << "Your guess is greater than the answer" << endl;
		}
		if (input == answer) {
			cout << "Your guess is equal to the answer. You win!" << endl;
			break;
		}
		if (input < answer) {
			cout << "Your answer is less than the answer"<< endl;
		}
		
		
	}
	return 0;
}
