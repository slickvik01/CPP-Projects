#include <stdio.h>
#include <iostream>
long double km, m, cm, mm, in, ft, yd, mi;

using namespace std;

int main() {
	bool i = true;
	int Unit1, Unit2;
	while (i != false ) {
		cout << "Pick the unit which you are converting:" << endl;
		cout << "=======================" << endl;
		cout << "1.) Kilometer " << endl;
		cout << "2.) Meter" << endl;
		cout << "3.) Centimeter" << endl;
		cout << "4.) Milimeter" << endl;
		cout << "5.) Inch" << endl;
		cout << "6.) Foot" << endl;
		cout << "7.) Yard" << endl;
		cout << "8.) Mile" << endl;
		cout << "0.) Terminate" << endl;
		cout << "\n \n Type the number for the unit you are converting: " << endl;
		cin >> Unit1;
		cout << "\n \n \n";
		
		cout << "Pick the unit which you are converting into:" << endl;
		cout << "======================" << endl;
		cout << "1.) Kilometer " << endl;
		cout << "2.) Meter" << endl;
		cout << "3.) Centimeter" << endl;
		cout << "4.) Milimeter" << endl;
		cout << "5.) Inch" << endl;
		cout << "6.) Foot" << endl;
		cout << "7.) Yard" << endl;
		cout << "8.) Mile" << endl;
		cout << "0.) Terminate" << endl;
		cout << "\n \n Type the number for the unit you are converting it into: " << endl;
		cin >> Unit2;
		
		if (Unit1==1) {
			if (Unit2==1) {
				cout << "Type in kilometers: ";
				cin >> km;
				cout << km << " kilometers = " << km << " kilometers" << endl << endl;
			}
			if (Unit2==2) {
				cout << "Type in kilometers: ";
				cin >> km;
				m=1000*km;
				cout << km << " kilometers = " << m << " meters" << endl << endl;
			}
			if (Unit2==3) {
				cout << "Type in kilometers: ";
				cin >> km;
				cm=100000*km;
				cout << km << " kilometers = " << cm << " centimeters" << endl << endl;
			}
			if (Unit2==4) {
				cout << "Type in kilometers: ";
				cin >> km;
				mm=1000000*km;
				cout << km << " kilometers = " << mm << "millimeters" << endl << endl;
			}
			if (Unit2==5) {
				cout << "Type in kilometers: ";
				cin >> km;
				in=39370.1*km;
				cout << km << " kilometers = " << in << " inches" << endl << endl;
			}
			if (Unit2==6) {
				cout << "Type in kilometers: ";
				cin >> km;
				ft=3280.84*km;
				cout << km << " kilometers = " << ft << " feet" << endl << endl;
			}
			if (Unit2==7) {
				cout << "Type in kilometers: ";
				cin >> km;
				yd=1093.61*km;
				cout << km << " kilometers = " << yd << " yards" << endl << endl;
			}
			if (Unit2==8) {
				cout << "Type in kilometers: ";
				cin >> km;
				mi=0.621*km;
				cout << km << " kilometers = " << mi << " miles" << endl << endl;
			}
			if (Unit2==0) {
				break;
			}
		}
		if (Unit1==2) {
			if (Unit2==1) {
				cout << "Type in meters: ";
				cin >> m;
				km=m/1000;
				cout << m << " meters = " << km << " kilometers" << endl << endl;
			}
			if (Unit2==2) {
				cout << "Type in meters: ";
				cin >> m;
				cout << m << " meters = " << m << " meters" << endl << endl;
			}
			if (Unit2==3) {
				cout << "Type in meters: ";
				cin >> m;
				cm=100*m;
				cout << m << " meters = " << cm << " centimeters" << endl << endl;
			}
			if (Unit2==4) {
				cout << "Type in meters: ";
				cin >> m;
				mm=1000*m;
				cout << m << " meters = " << mm << "millimeters" << endl << endl;
			}
			if (Unit2==5) {
				cout << "Type in meters: ";
				cin >> m;
				in=39.37*m;
				cout << m << " meters = " << in << " inches" << endl << endl;
			}
			if (Unit2==6) {
				cout << "Type in meters: ";
				cin >> m;
				ft=3.28*m;
				cout << m << " meters = " << ft << " feet" << endl << endl;
			}
			if (Unit2==7) {
				cout << "Type in meters: ";
				cin >> m;
				yd=1.09*m;
				cout << m << " meters = " << yd << " yards" << endl << endl;
			}
			if (Unit2==8) {
				cout << "Type in meters: ";
				cin >> m;
				mi=0.000621371*m;
				cout << m << " meters = " << mi << " miles" << endl << endl;
			}
			if (Unit2==0) {
				break;
			}
		}
	} 
	
	return 0;
}
