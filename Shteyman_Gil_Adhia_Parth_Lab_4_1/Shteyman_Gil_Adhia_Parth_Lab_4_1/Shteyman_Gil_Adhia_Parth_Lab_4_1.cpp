#include<iostream>
#include<vector>
using namespace std;

void quicksort(vector<int>&, int, int);
int partition(vector<int>&, int, int);
void swap(int*, int*);

int main()
{
	int elements;
	cout << "Enter the number of elements you will be entering: ";
	cin >> elements;
	vector<int> vals;
	cout << "Enter the elements of the unsorted array: ";

	for (int i = 0; i < elements; i++)
	{
		int x;
		cin >> x;
		vals.push_back(x);
	}
	quicksort(vals, 0, vals.size() - 1);
	for (unsigned int i = 0; i < vals.size(); i++)
		cout << vals[i] << " ";
	return 0;

}

void quicksort(vector<int>& list, int beg, int end)
{
	if (beg < end)
	{
		int index = partition(list, beg, end);
		quicksort(list, beg, index - 1);
		quicksort(list, index + 1, end);
	}
	
}

int partition(vector<int>& list, int beg, int end)
{

	int *right, *left;
	right = &list[end];
	left = &list[beg];
	while (right != left)
	{
		while (*right > *left && right > left)
		{
			right--;
		}
		swap(right, left);

		while (*right > *left && right > left)
			left++;
		swap(right, left);
	}
	int index = right - &list[0];

	return index;
}
void swap(int* one, int* two)
{
	int temp = *one;
	*one = *two;
	*two = temp;
}