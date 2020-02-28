/*
Gil Shteyman and Parth Adhia
Writer: Gil Shteyman
Salespeople Commission

*/
#include<vector>
#include<iostream>
using namespace std;
int main()
{ 
	vector<int> cash;
	for(int i = 0; i < 9; i++)
	{
		cash.push_back(0);
	}
	cout << "Enter the number of Salespeople Salaries you will be entering today: ";
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int val;
		cout << "Enter the salary of the salesperson: ";
		cin >> val;
		val = val * .09 + 200;
		if (val <= 299)
		{
			cash[0]++;
		}
		else if (val <= 399)
		{
			cash[1]++;
		}
		else if (val <= 499)
		{
			cash[2]++;
		}
		else if (val <= 599)
		{
			cash[3]++;
		}
		else if (val <= 699)
		{
			cash[4]++;
		}
		else if (val <= 799)
		{
			cash[5]++;
		}
		else if (val <= 899)
		{
			cash[6]++;
		}
		else if (val <= 999)
		{
			cash[7]++;
		}
		else
		{
			cash[8]++;
		}
	}
	cout << "Number of people who earned a salary between $200 and $299 is: " << cash[0] << endl;
	cout << "Number of people who earned a salary between $300 and $399 is: " << cash[1] << endl;
	cout << "Number of people who earned a salary between $400 and $499 is: " << cash[2] << endl;
	cout << "Number of people who earned a salary between $500 and $599 is: " << cash[3] << endl;
	cout << "Number of people who earned a salary between $600 and $699 is: " << cash[4] << endl;
	cout << "Number of people who earned a salary between $700 and $799 is: " << cash[5] << endl;
	cout << "Number of people who earned a salary between $800 and $899 is: " << cash[6] << endl;
	cout << "Number of people who earned a salary between 4900 and $999 is: " << cash[7] << endl;
	cout << "Number of people who earned a salary of $1000 or greater: " << cash[8] << endl;
	system("pause");
	return 0;

	

}