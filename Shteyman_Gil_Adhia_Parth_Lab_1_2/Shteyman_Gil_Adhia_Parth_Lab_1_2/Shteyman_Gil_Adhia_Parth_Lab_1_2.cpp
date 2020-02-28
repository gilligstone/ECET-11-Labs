/*
Gil Shteyman and Parth Adhia
Lab 1_2 Invoice
Written by: Gil Shteyman
*/

#include<iostream>
#include<string>
using namespace std;

class Invoice
{
	private:
		string partNumber;
		string partDescription;
		int quantity;
		int price;
	public:
		Invoice(string, string, int, int);
		void setPartNumber(string);
		void setPartDescription(string);
		void setQuantity(int);
		void setPrice(int);
		string getPartNumber();
		string getPartDescription();
		int getQuantity();
		int getPrice();
		int getInvoiceAmount();
};
Invoice::Invoice(string num, string des, int quan, int pri)
{
	partNumber = num;
	partDescription = des;
	if (quan < 0)
		quantity = 0;
	else
		quantity = quan;
	if (price < 0)
		price = 0;
	else
		price = pri;
}
 void Invoice::setPartNumber(string num)
{
	partNumber = num;
}
void Invoice::setPartDescription(string des)
 {
	 partDescription = des;
 }
void Invoice::setQuantity(int quan)
{
	if (quan < 0)
		quantity = 0;
	else
		quantity = quan;
}
void Invoice::setPrice(int pri)
{
	if (price < 0)
		price = 0;
	else
		price = pri;
}
string Invoice::getPartNumber()
{
	return partNumber;
}
string Invoice::getPartDescription()
{
	return partDescription;
}
int Invoice::getPrice()
{
	return price;
}
int Invoice::getQuantity()
{
	return quantity;
}
int Invoice::getInvoiceAmount()
{
	return quantity*price;
}
int main()
{
	string partnum;
	string description;
	int quantity;
	int price;
	cout << "Enter part number: ";
	cin >> partnum;
	cin.ignore();
	cout << "Enter part description: ";
	getline(cin, description);
	cout << "enter quanitity: ";
	cin >> quantity;
	cout << "enter price: ";
	cin >> price;
	Invoice part(partnum, description, quantity, price);
	cout << "Would you like to change part number(answer yes or no): ";
	string x;
	cin >> x;
	if (x == "yes" || x == "Yes")
	{
		cout << "Enter new part number: ";
		cin >> partnum;
		part.setPartNumber(partnum);
	}
	cout << "Would you like to change part description(answer yes or no): ";
	x;
	cin >> x;
	if (x == "yes" || x == "Yes")
	{
		cout << "Enter new part description: ";
		cin.ignore();
		getline(cin, description);
		part.setPartDescription(description);
	}
	cout << "Would you like to change the quantity(answer yes or no): ";
	x;
	cin >> x;
	if (x == "yes" || x == "Yes")
	{
		cout << "Enter new quantity: ";
		cin >> quantity;
		part.setQuantity(quantity);
	}
	cout << "Would you like to change the price(answer yes or no): ";
	x;
	cin >> x;
	if (x == "yes" || x == "Yes")
	{
		cout << "Enter new price: ";
		cin >> price;
		part.setPrice(price);
	}
	cout << "The description of your part is: " << part.getPartDescription() << ". The part number is: " << part.getPartNumber() << ". The price is: $" << part.getPrice() << ". The quantity is: " << part.getQuantity() << endl;





}