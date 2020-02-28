/*
Gil Shteyman and Parth Adhia
Writer: Parth Adhia
Complex Class

*/


#include <iostream>
#include <string>
using namespace std;
class Complex {
private:
	int realp;
	int fakep;
public:
	Complex(int r, int f);
	void sub(Complex ob1, Complex ob2);
	void add(Complex ob1, Complex ob2);
	void print(Complex ob1);
};
Complex::Complex(int r, int f) {
	realp = r;
	fakep = f;
}
void Complex::sub(Complex obj, Complex ob1) {
	cout << obj.realp - ob1.realp << "+" << obj.fakep - ob1.fakep << "j" << endl;;
}
void Complex::add(Complex obj, Complex ob1) {
	cout << obj.realp + ob1.realp << "+" << obj.fakep + ob1.fakep << "j" << endl;;
}
void Complex::print(Complex ob1) {
	cout << ob1.realp << "+" << ob1.fakep << "j" << endl;;
}
int main() {
	while (true) {
		int r1;
		int r2;
		int f1;
		int f2;
		int choice;
		cout << "enter the real part of complex number 1" << endl;
		cin >> r1;
		cout << "enter the complex part of complex number 1" << endl;
		cin >> f1;
		cout << "enter the real part of complex number 2" << endl;
		cin >> r2;
		cout << "enter the complex part of complex number 2" << endl;
		cin >> f2;
		cout << "do you want to 1.add the numbers 2. subtract the numbers 3. print one of the numbers.. enter the number of your choice" << endl;
		cin >> choice;
		Complex nn(r1, f1);
		Complex mm(r2, f2);
		if (choice == 1) {
			nn.add(nn, mm);
		}
		else if (choice == 2) {
			nn.sub(nn, mm);
		}
		else if (choice == 3) {
			int c;
			cout << "Do you want to print the first number of second. type 1 or 2" << endl;
			cin >> c;
			if (c == 1) {
				nn.print(nn);

			}
			else {
				mm.print(mm);
			}
		}
	}
}
