#include<iostream>
#include<string>
using namespace std;

int main()
{
	string digit[] = { "", "ONE", "TWO", "THREE", "FOUR",
		"FIVE", "SIX", "SEVEN", "EIGHT", "NINE" };

	string tens[] = { "TWENTY" , "THIRTY", "FORTY",
		"FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY" };

	string teens[] = { "TEN" , "ELEVEN", "TWELVE",
		"THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN",
		"SEVENTEEN", "EIGHTEEN", "NINETEEN" };

	while (true)
	{
		float val;
		cout << "Enter the amount of the check(must be less than 999.99): ";
		cin >> val;
		int hundreds = int(val) / 100;
		
		cout << digit[hundreds];
		if (hundreds != 0)
			cout << " HUNDRED ";
		int thens = (int(val) / 10) % 10;
		if (thens != 1)
			cout << tens[thens - 2] << " ";
		int ones = int(val) % 10;
		if (thens == 1)
			cout << teens[ones] << " ";
		else
			cout << digit[ones] << " ";
		cout << (int(val * 100) % 100) << "/100" << endl;

	}



}