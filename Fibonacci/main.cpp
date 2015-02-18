#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	a=0;
	b=1;
	c=0;
	cout << a << ", " << b;
	
	while (true) {
		c=a+b;
		a=b;
		b=c;
		if (c<100) {
			cout << ", " << c;
		}
		else {
			break;
		}
	}
	return 0;
	/*

	 int a,b,c;
	a=0;
	b=1;
	c=0;
	cout << a << ", " << b;
	
	do {
		if (true) {
			c=a+b;
			cout << ", " << c;
			a=b;
			b=c;
		}
		else {
			break;
	
		}
	} while (c<100);
	 */


}
