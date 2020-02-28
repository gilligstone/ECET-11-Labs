#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
	cout << "How many numbers would you like to input: ";
	int num;
	cin >> num;
	vector<int> storage;
	for (int i = 0; i < num; i++)
	{
		int val;
		cin >> val;
		if(val > -1 && val < 101)
			storage.push_back(val);

	}
	sort(storage.begin(), storage.end());
	cout << "After removing duplicates your values are: ";
	for (int i = 0; i < storage.size(); i++)
	{
		if (i != 0 && storage[i] == storage[i - 1]) {
			storage.erase(storage.begin() + i);
			i--;
		}
	}
	for (int i = 0; i < storage.size(); i++)
	{
		cout << storage[i] << " ";
	}
	
		
	cout << endl;





}