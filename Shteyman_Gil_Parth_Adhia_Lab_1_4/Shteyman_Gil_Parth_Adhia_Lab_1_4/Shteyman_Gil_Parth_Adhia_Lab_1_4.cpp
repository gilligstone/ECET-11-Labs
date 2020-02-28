/*
Team: Gil Shteyman and Parth Adhia
Writer: Parth Adhia
Date Class

*/



#include <iostream>
#include <string>
using namespace std;
class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int d, int m, int y);
	void displayDate();
	void setmonth(int m);
	void setday(int m);
	void setyear(int m);
	void getmonth();
	void getday();
	void getyear();
};
Date::Date(int d, int m, int y) {
	if (0 < m < 13) {
		month = m;
	}
	else {
		month = 1;
	}
	day = d;
	year = y;
	
}
void Date::displayDate() {
	cout << month << "/" << day << "/" << year << endl;;
}
void Date::setmonth(int m) {
	if (m > 0 && m < 13)
		month = m;
	else
		month = 1;
}
void Date::setday(int m) {
	day = m;
}
void Date::setyear(int m) {
	year = m;
}
void Date::getday() {
	cout << day;
}
void Date::getmonth() {
	cout << month;
}void Date::getyear() {
	cout << year;
}
int main() {
	while (true) {
		int m, d, y, o, p;
		cout << "enter the month day and year of your date separated by spaces: ";
		cin >> m >> d >> y;
		Date date1(d, m, y);
		cout << "The date is: ";
		date1.displayDate();
		cout << endl;
	}
}
