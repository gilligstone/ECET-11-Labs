/*
Gil Shteyman and Parth Adhia
Writer: Parth
Lab 3.5 The Sieve of Eratosthenes


*/



#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (true)
	{
		int N;
		cout << "Enter max number " << endl;;
		cin >> N;
		cout << endl;
		vector<int> s(N + 1, 1);
		//for (int i = 0; i < N; i++)
		//cout << i << ": " << sieve[i] << endl;
		for (int i = 2; i < N + 1; i++)
		{
			if (s[i] == 1)
			{
				for (int j = 2; i * j < N + 1; j++)
				{
					s[i * j] = 0;
				}
			}
		}
		cout << "The prime numbers from 2 to " << N << " are: ";
		for (int i = 2; i < N + 1; i++)
		{
			if (s[i] == 1)
				cout << i << " ";
		}
		cout << endl;
	}
}
