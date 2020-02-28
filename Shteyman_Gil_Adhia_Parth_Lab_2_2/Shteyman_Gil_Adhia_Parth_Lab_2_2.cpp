/*
Gil Shteyman and Parth Adhia
Writer: Parth
Lab 2_2 Rational
*/
#include <iostream>
#include <string>
using namespace std;
class Rational {
private:
	int n;
	int d;
public:
	void add(Rational o, Rational t);
	void sub(Rational o, Rational t);
	void mult(Rational o, Rational t);
	void div(Rational o, Rational t);
	void p1(Rational o);
	void p2(Rational t);
	Rational(int = 1, int = 2);
};
void Rational::add(Rational o, Rational t) {
	int n1 = o.n;
	int n2 = t.n;
	int d1 = o.d;
	int d2 = t.d;
	int div = 1;
	int gcf, lcm, df, nf;
	while (div <= d1) {
		if (d1 % div == 0 && d2 % div == 0) {
			gcf = div;
		}
		div++;
	}
	lcm = d1 * d2 / gcf;
	df = lcm;
	nf = n1 * lcm / d1 + n2 * lcm / d2;
	cout << "The sum is: " << nf << "/" << df << endl;;
}
void Rational::sub(Rational o, Rational t) {
	int n1 = o.n;
	int n2 = t.n;
	int d1 = o.d;
	int d2 = t.d;
	int div = 1;
	int gcf, lcm, df, nf;
	while (div <= d1) {
		if (d1 % div == 0 && d2 % div == 0) {
			gcf = div;
		}
		div++;
	}
	lcm = d1 * d2 / gcf;
	df = lcm;
	nf = n1 * lcm / d1 - n2 * lcm / d2;
	cout << "The difference is: " << nf << "/" << df << endl;;
}
void Rational::mult(Rational o, Rational t) {
	int n1 = o.n;
	int n2 = t.n;
	int d1 = o.d;
	int d2 = t.d;
	int div = 1;
	int gcf, lcm, df, nf;
	nf = n1 * n2;
	df = d1 * d2;
	while (div <= df) {
		if (df % div == 0 && nf % div == 0) {
			gcf = div;
		}
		div++;
	}
	//cout << gcf << endl;;
	lcm = nf * df / gcf;
	//cout << lcm << endl;;
	df = df / gcf;
	nf = nf / gcf;
	cout << "The product is: " << nf << "/" << df << endl;;
}
void Rational::div(Rational o, Rational t) {
	int n1 = o.n;
	int n2 = t.n;
	int d1 = o.d;
	int d2 = t.d;
	int div = 1;
	int gcf, lcm, df, nf;
	nf = n1 * d2;
	df = d1 * n2;
	while (div <= df) {
		if (df % div == 0 && nf % div == 0) {
			gcf = div;
		}
		div++;
	}
	//cout << gcf << endl;;
	lcm = nf * df / gcf;
	//cout << lcm << endl;;
	df = df / gcf;
	nf = nf / gcf;
	cout << "The quotient is: " << nf << "/" << df << endl;;
}
void Rational::p1(Rational o) {
	cout << "The number is: " << n << "/" << d << endl;
}
void Rational::p2(Rational o) {
	cout << "The number is: " << float(n) / float(d) << endl;
}
Rational::Rational(int x, int y) {
	n = x;
	d = y;
}
int main() {
	while (true) {
		int x, y;
		cout << "Enter numerator of rational number 1" << endl;
		cin >> x;
		cout << "Enter denominator of rational number 1" << endl;
		cin >> y;
		Rational n1(x, y);
		cout << "Enter numerator of rational number 2" << endl;
		cin >> x;
		cout << "Enter denominator of rational number 2" << endl;
		cin >> y;
		Rational n2(x, y);
		cout << "Do you want to:\n1. add the two numbers\n2. subtract the two numbers\n3. multiply the numbers\n4. divide the two numbers\n5. print one of the numbers as a fraction\n6. print one of the numbers as a decimal" << endl;;
		cout << "enter the number of your option ex. 4" << endl;
		cin >> x;
		if (x == 1) {
			n1.add(n1, n2);
		}
		else if (x == 2) {
			n1.sub(n1, n2);
		}
		else if (x == 3) {
			n1.mult(n1, n2);
		}
		else if (x == 4) {
			n1.div(n1, n2);
		}
		else if (x == 5) {
			cout << "do you want to print the first number or the second. type 1 or 2" << endl;
			cin >> x;
			if (x == 1) {
				n1.p1(n1);
			}
			else if (x == 2) {
				n2.p1(n2);
			}
			else {
				cout << "not a valid entry" << endl;
			}
		}
		else if (x == 6) {
			cout << "do you want to print the first number or the second. type 1 or 2" << endl;
			cin >> x;
			if (x == 1) {
				n1.p2(n1);
			}
			else if (x == 2) {
				n2.p2(n2);
			}
			else {
				cout << "not a valid entry" << endl;
			}
		}
		else {
			cout << "not a valid entry" << endl;
		}
	}
}