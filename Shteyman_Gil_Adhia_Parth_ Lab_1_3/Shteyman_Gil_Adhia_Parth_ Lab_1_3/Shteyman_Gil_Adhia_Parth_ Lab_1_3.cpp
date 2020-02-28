#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
	string first;
	string last;
	int sal;
public:
	Employee(string, string, float);
	void setsal(float);
	void displaysal();
};
Employee::Employee(string firsty, string lasty, float sally) {
	first = firsty;
	last = lasty;
	sal = sally;
	if (sally < 1) {
		sal = 0;
	}
}
void Employee::setsal(float sall) {
	sal = sall;
}
void Employee::displaysal() {
	cout << first << " " << last << "'s salary is " << sal << endl;
}
int main() {
	Employee bob("Mr.", "Bob", 2);
	Employee bobby("Big", "Bird", 3);
	bob.displaysal();
	bobby.displaysal();
	bob.setsal(2.2);
	bobby.setsal(3.3);
	bob.displaysal();
	bobby.displaysal();
	while (true) {
		string f;
		string l;
		int dally;
		int choice;

		cout << "type the person's first and last name separated by a space." << endl;
		cin >> f;
		cin >> l;
		cout << "enter the person's salary";
		cin >> dally;
		Employee name = Employee(f, l, dally);

		cout << "type the person's first and last name separated by a space." << endl;
		cin >> f;
		cin >> l;
		string name = f + l;
		cout << "enter the person's new salary";
		cin >> dally;
		name.setsal();

	}
	//system("pause");
}