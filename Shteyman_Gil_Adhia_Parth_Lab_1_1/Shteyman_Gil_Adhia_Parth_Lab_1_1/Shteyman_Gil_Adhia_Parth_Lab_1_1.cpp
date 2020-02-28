/*
Gil and Parth Lab 1_1
written by Gil


*/



#include<iostream>
using namespace std;

class Account{
	private:
		int balance;
	public:
		Account(int);
		void credit(int);
		void debit(int);
		int getBalance();
};
Account::Account(int bal)
{
	if (bal >= 0)
		balance = bal;
	else
	{
		balance = 0;
		cout << "intial balance is invalid. Balance is set to 0.";
	}
}
void Account::credit(int add)
{
	balance += add;
}
void Account::debit(int sub)
{
	if (balance < sub)
		cout << "Debit amount exceeded account balance.";
	else
		balance -= sub;
}

int Account::getBalance()
{
	return balance;
}
int main()
{
	int bal1, bal2; 
	cout << "enter bal1: ";
	cin >> bal1;
	cout << "enter bal2: ";
	cin >> bal2;
	Account account1(bal1);
	Account account2(bal2);
	cout << "enter the amount you want to add to account1: ";
	int add;
	cin >> add;
	account1.credit(add);
	cout << "enter the amount you want to subtract from account2: ";
	int sub;
	cin >> sub;
	account2.debit(sub);
	cout << "Your final balance in account one is: " << account1.getBalance() << endl;
	cout << "Your final balance in account one is: " << account2.getBalance() << endl;
}
