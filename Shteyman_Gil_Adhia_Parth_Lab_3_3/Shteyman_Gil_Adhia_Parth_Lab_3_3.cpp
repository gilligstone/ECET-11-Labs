#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	while (1)
	{
		int err;
		cout << "Enter margin of error(percentage): ";
		cin >> err;
		srand(time(NULL));
		vector<int> d1(37, 0);
		vector<int> d2(6, 0);
		for (int i = 0; i < 36000; i++)
		{
			int r1 = rand() % 6 + 1;
			int r2 = rand() % 6 + 1;
			int count = 0;
			for (int i = 1; i < 7; i++) {
				for (int j = 1; j < 7; j++) {
					count += 1;
					if (r1 == i && r2 == j) {
						d1[count] += 1;
					}

				}
			}

		}
		cout << "  1    2   3    4    5   6" << endl;;
		cout << "1 " << d1[1] << " " << d1[2] << " " << d1[3] << " " << d1[4] << " " << d1[5] << " " << d1[6] << endl;;
		cout << "2 " << d1[7] << " " << d1[8] << " " << d1[9] << " " << d1[10] << " " << d1[11] << " " << d1[12] << endl;
		cout << "3 " << d1[13] << " " << d1[14] << " " << d1[15] << " " << d1[16] << " " << d1[17] << " " << d1[18] << endl;
		cout << "4 " << d1[19] << " " << d1[20] << " " << d1[21] << " " << d1[22] << " " << d1[23] << " " << d1[24] << endl;
		cout << "5 " << d1[25] << " " << d1[26] << " " << d1[27] << " " << d1[28] << " " << d1[29] << " " << d1[30] << endl;
		cout << "6 " << d1[31] << " " << d1[32] << " " << d1[33] << " " << d1[34] << " " << d1[35] << " " << d1[36] << endl;
		bool r = true;
		for (int i = 0; i < 36; i++)
		{
			if (d1[i] - 1000 > err * 10) {
				r = false;
			}

		}
		if (!r)
			cout << endl << "Results are unreasonable" << endl;
		else cout << endl << "Results are reasonable" << endl;
		cout << endl << endl;
	}
}
