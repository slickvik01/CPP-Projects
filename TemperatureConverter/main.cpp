#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

long double ans;

void C_to_F() {
	long double c;
	cout << "Enter Celsius temperature: ";
	cin >> c;
	ans=(c*5)/9 + 32;
	cout << "\n \n \n";
	cout << "Fahrenheit temperature: " << ans << endl << endl;
	
}

void C_to_K() {
	long double c;
	cout << "Enter Celsius temperature: ";
	cin >> c;
	ans=c+273.15;
	cout << "\n \n \n";
	cout << "Kelvin temperature: " << ans << endl << endl;
	
}

void F_to_C() {
	long double f;
	cout << "Enter Fahrenheit temperature: ";
	cin >> f;
	ans=(5*(f-32))/9;
	cout << "\n \n \n";
	cout << "Celsius temperature: " << ans << endl << endl;
	
}

void F_to_K() {
	long double f;
	cout << "Enter Fahrenheit temperature: ";
	cin >> f;
	ans=(5*(f + 459.67))/9;
	cout << "\n \n \n";
	cout << "Kelvin temperature: " << ans << endl << endl;
	
}

void K_to_F() {
	long double k;
	cout << "Enter Kelvin temperature: ";
	cin >> k;
	ans=(k*9)/5-459.67;
	cout << "\n \n \n";
	cout << "Fahrenheit temperature: " << ans << endl << endl;
	
}

void K_to_C() {
	long double k;
	cout << "Enter Kelvin temperature: ";
	cin >> k;
	ans = k - 273.15;
	cout << "\n \n \n";
	cout << "Celsius temperature: " << ans << endl << endl;
	
}

int main() {
	bool i=false;
	int x;
	while (i != true) {
		
		cout << "Choose the temperature conversion you would like to use:" << endl;
		cout << "\n \n";
		cout << "1.) Celsius >> Fahrenheit" << endl;
		cout << "2.) Celsius >> Kelvin" << endl;
		cout << "3.) Fahrenheit >> Celsius" << endl;
		cout << "4.) Fahrenheit >> Kelvin" << endl;
		cout << "5.) Kelvin >> Fahrenheit" << endl;
		cout << "6.) Kelvin >> Celsius" << endl;
		cout << "0.) Terminate \n" << endl;
		cout << "Print the number of the conversion you want: ";
		cin >> x;
		if (x==1) {
			C_to_F();
		}
		if (x==2) {
			C_to_K();
		}
		if (x==3) {
			F_to_C();
		}
		if (x==4) {
			F_to_K();
		}
		if (x==5) {
			K_to_F();
		}
		if (x==6) {
			K_to_C();
		}
		if (x==0) {
			break;
		}
	}
	
	return 0;
}
