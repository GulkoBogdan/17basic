#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//1
	int a1;
	int b1;
	string r1 = "We dont have one even number!";
	cout << "Input your number: ";
	do {
		cin >> a1;

	} while (a1 <= 0);

	while (a1 > 0) {
		b1 = a1 % 10;
		a1 = a1 / 10;
		if (b1 % 2 == 0) {
			r1 = "We have one even number!";
			break;
		}
	}
	cout << r1 << endl;

	//2
	int a2;
	int b2;
	int c2;
	string r2 = "It is increasing sequence!";
	cout << "Input your number: ";
	do {
		cin >> a2;

	} while (a2 <= 0);
	while (a2 > 0) {
		b2 = a2 % 10;
		c2 = a2 / 10 % 10;
		a2 = a2 / 10;
		if (b2 < c2) {
			r2 = "It isnt increasing sequence!";
			break;
		}
	}
	cout << r2 << endl;

	//3
	int a3;
	int b3 = 0;
	int c3 = 0;
	int r3{};
	int d3;
	int e3 = 0;
	int f3;

	cout << "Input your number: ";
	do {
		cin >> a3;
	} while (a3 == 0);
	d3 = a3;
	while (a3 > 0) {
		a3 = a3 / 10;
		b3++;
	}
	f3 = b3;
	for (e3; e3 < f3; e3++) {

		c3 = d3 % 10 * pow(10, b3);
		d3 = d3 / 10;
		b3--;
		r3 += c3;


	}

	cout << r3 / 10;

	return 0;

}