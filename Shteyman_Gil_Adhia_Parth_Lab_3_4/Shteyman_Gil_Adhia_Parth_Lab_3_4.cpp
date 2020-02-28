/*
Gil Shteyman and Parth Adhia
Writer: Parth Adhia
Lab 3.4 airline reservation system


*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

void firstClass(vector<int>&);
void economy(vector<int>&);

int main()
{
	int a;
	cout << "Enter the total number of seats: ";
	cin >> a;
	cout << endl;
	char r;
	vector<int> s(a + 1);
	int c;
	cout << "Type 1 for First Class and 2 for Economy." << endl;
	cin >> c;
	cout << endl;
	if (c == 1) {
		bool t = false;
		int i;
		char rr;
		for (i = 1; i <= s.size() / 5; i++)
		{
			if (s[i] == 0)
			{
				s[i] = 1;
				t = true;
				break;
			}
		}
		if (t == true) {
			cout << "Boarding Ticket" << endl;
			cout << "_______________________" << endl;
			cout << "                       |" << endl;
			cout << "Seat Number: " << i << "         |" << endl;
			cout << "Seat Type: First Class |" << endl;
			cout << "_______________________|" << endl;
		}
		else {
			cout << "is it okay if you are put in economy? type y or no ";
			cin >> rr;
			cout << endl;
			if (rr == 'y') {
				bool t = false;
				int i;
				for (i = s.size() / 5 + 1; i <= s.size() - 1; i++)
				{
					if (s[i] == 0)
					{
						s[i] = 1;
						t = true;
						break;
					}
				}
				if (t == true) {
					cout << "Boarding Ticket" << endl;
					cout << "_______________________" << endl;
					cout << "                       |" << endl;
					cout << "Seat Number: " << i << "        |" << endl;
					cout << "Seat Type: Economy     |" << endl;
					cout << "_______________________|" << endl;
				}
				else {
					cout << "next flight leaves in 3 hours" << endl;
				}
			}
			else {
				cout << "next flight leaves in 3 hours" << endl;
			}
		}
	}

	else if (c == 2) {
		bool t = false;
		int i;
		for (i = s.size() / 5 + 1; i <= s.size() - 1; i++)
		{
			if (s[i] == 0)
			{
				s[i] = 1;
				t = true;
				break;
			}
		}
		if (t == true) {
			cout << "Boarding Ticket" << endl;
			cout << "_______________________" << endl;
			cout << "                       |" << endl;
			cout << "Seat Number: " << i << "        |" << endl;
			cout << "Seat Type: Economy     |" << endl;
			cout << "_______________________|" << endl;
		}
		else {
			cout << "next flight leaves in 3 hours" << endl;
		}
	}

	else {
		cout << "not a valid choice" << endl;
	}
	cout << endl << "If you want to book another passenger, type y. Otherwise type n ";
	cin >> r;
	cout << endl;
	while (r == 'y') {
		cout << "Type 1 for First Class and 2 for Economy." << endl;
		cin >> c;
		cout << endl;
		if (c == 1) {
			bool t = false;
			int i;
			char rr;
			for (i = 1; i <= s.size() / 5; i++)
			{
				if (s[i] == 0)
				{
					s[i] = 1;
					t = true;
					break;
				}
			}
			if (t == true) {
				cout << "Boarding Ticket" << endl;
				cout << "_______________________" << endl;
				cout << "                       |" << endl;
				cout << "Seat Number: " << i << "         |" << endl;
				cout << "Seat Type: First Class |" << endl;
				cout << "_______________________|" << endl;
			}
			else {
				cout << "is it okay if you are put in economy? type y or n ";
				cin >> rr;
				cout << endl;
				if (rr == 'y') {
					bool t = false;
					int i;
					for (i = s.size() / 5 + 1; i <= s.size() - 1; i++)
					{
						if (s[i] == 0)
						{
							s[i] = 1;
							t = true;
							break;
						}
					}
					if (t == true) {
						cout << "Boarding Ticket" << endl;
						cout << "_______________________" << endl;
						cout << "                       |" << endl;
						cout << "Seat Number: " << i << "        |" << endl;
						cout << "Seat Type: Economy     |" << endl;
						cout << "_______________________|" << endl;
					}
					else {
						cout << "next flight leaves in 3 hours" << endl;
					}
				}
				else {
					cout << "next flight leaves in 3 hours" << endl;
				}
			}
		}

		else if (c == 2) {
			bool t = false;
			int i;
			for (i = s.size() / 5 + 1; i <= s.size() - 1; i++)
			{
				if (s[i] == 0)
				{
					s[i] = 1;
					t = true;
					break;
				}
			}
			if (t == true) {
				cout << "Boarding Ticket" << endl;
				cout << "_______________________" << endl;
				cout << "                       |" << endl;
				cout << "Seat Number: " << i << "        |" << endl;
				cout << "Seat Type: Economy     |" << endl;
				cout << "_______________________|" << endl;
			}
			else {
				cout << "next flight leaves in 3 hours" << endl;
			}
		}

		else {
			cout << "not a valid choice" << endl;
		}

		cout << endl << "If you want to book another passenger, type y. Otherwise type n ";
		cin >> r;
		cout << endl;

	}


}