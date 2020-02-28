/*
Gil Shteyman and Parth Adhia
Lab 4.2
Maze Traversal
Writer: Gil Shteyman
*/
#include<iostream>
#include<utility>
#include<string>
#include<Windows.h>
using namespace std;
class maze {
private:
	char mazer[12][12];
	pair <int, int> position;
	int facing; //0 is up. 1 is right. 2 is down. 3 is left
public:
	void printMaze(); // done
	maze(char[12][12]);  //done
	bool ifExit(); //done
	void move(); //done
	pair <int, int> findStart(); // done
};
maze::maze(char maiz[12][12])
{
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			mazer[i][j] = maiz[i][j];
		}
	}
	facing = 1;
	position = findStart();
	mazer[position.first][position.second] = 'x';
	printMaze();
}
void maze::printMaze()
{
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << mazer[i][j] << " ";
		}
		cout << endl;
	}
}
bool maze::ifExit()
{
	if (position.first == 0 || position.first == 11 || position.second == 0 || position.second == 11)
		return true;
	return false;
}
pair <int, int> maze::findStart()
{
	
	pair <int, int> start;
	for (int i = 0; i < 12; i++)
	{
		//cout << "inc";
		if (mazer[0][i] == '.')
		{
			start.first = 0;
			start.second = i;
			facing = 2; //down
			//cout << start.first << start.second;
			return start;
		}
		else if (mazer[i][0] == '.')
		{
			start.first = i;
			start.second = 0;
			facing = 1; //right
			//cout << start.first << start.second;
			return start;
		}
		else if (mazer[i][11] == '.')
		{
			start.first = i;
			start.second = 11;
			facing = 3; //left
			//cout << start.first << start.second;
			return start;
		}
		else if (mazer[11][i] == '.')
		{
			start.first = 11;
			start.second = i;
			facing = 0; //up
			//cout << start.first << start.second;
			return start;
		}

		
	}
	return start;
}
void maze::move()
{
	int count = 1;
	while (true) {
		
		if (facing == 1)
		{
			if (mazer[position.first + 1][position.second] == '.' || (mazer[position.first + 1][position.second] == 'x' && count != 0))
			{
				position.first++;
				mazer[position.first][position.second] = 'x';
				facing = 2;
				return;
			}
			else if (mazer[position.first][position.second + 1] == '.' || mazer[position.first][position.second + 1] == 'x' )
			{
				position.second++;
				mazer[position.first][position.second] = 'x';
				facing = 1;
				return;
			}
			else if (mazer[position.first + 1][position.second] == '.' || (mazer[position.first + 1][position.second]) == 'x')
			{
				facing = 2; //down
				count = 0;
			}
			else if (mazer[position.first - 1][position.second] == '.' || mazer[position.first - 1][position.second] == 'x')
			{
				facing = 0; //up
				count = 0;
			}
			else
			{
				facing = 3; //left
				count = 0;
			}
				
		}
		if (facing == 0)
		{
			if (mazer[position.first][position.second + 1] == '.' || (mazer[position.first][position.second + 1] == 'x' && count != 0))
			{
				position.second++;
				mazer[position.first][position.second] = 'x';
				facing = 1; 
				return;
			}
			else if (mazer[position.first - 1][position.second] == '.' || mazer[position.first - 1][position.second] == 'x')
			{
				position.first--;
				mazer[position.first][position.second] = 'x';
				facing = 0;
				return;
			}
			else if (mazer[position.first][position.second + 1] == '.' || mazer[position.first][position.second + 1] == 'x')
			{
				facing = 1; //right
				count = 0;
			}
			else if (mazer[position.first][position.second - 1] == '.' || mazer[position.first][position.second - 1] == 'x')
			{
				facing = 3; //left
				count = 0;
			}
			else
			{
				facing = 2; //down
				count = 0;
			}
		}
		if (facing == 2)
		{
			if (mazer[position.first][position.second - 1] == '.' || (mazer[position.first][position.second - 1] == 'x' && count != 0))
			{
				position.second--;
				mazer[position.first][position.second] = 'x';
				facing = 3;
				return;
			}
			else if (mazer[position.first + 1][position.second] == '.' || mazer[position.first + 1][position.second] == 'x')
			{
				position.first++;
				mazer[position.first][position.second] = 'x';
				facing = 2;
				return;
			}
			else if (mazer[position.first][position.second - 1] == '.' || mazer[position.first][position.second - 1] == 'x')
			{
				facing = 3; //left
				count = 0;
			}
			else if (mazer[position.first][position.second + 1] == '.' || mazer[position.first][position.second + 1] == 'x')
			{
				facing = 1; //right
				count = 0;
			}
			else
			{
				facing = 0; //up
				count = 0;
			}
		}
		if (facing == 3)
		{
			if (mazer[position.first][position.second + 1] == '.' || (mazer[position.first + 1][position.second] == 'x' && count != 0))
			{
				
				position.second++;
				mazer[position.first][position.second] = 'x';
				facing = 0;
				return;
			}
			else if (mazer[position.first][position.second - 1] == '.' || mazer[position.first][position.second - 1] == 'x')
			{
				position.second--;
				mazer[position.first][position.second] = 'x';
				facing = 3;
				return;
			}
			else if (mazer[position.first - 1][position.second] == '.' || mazer[position.first - 1][position.second] == 'x')
			{
				facing = 0; //up
				count = 0;
			}
			else if (mazer[position.first + 1][position.second] == '.' || mazer[position.first + 1][position.second] == 'x')
			{
				facing = 2; //down
				count = 0;
			}
			else
			{
				facing = 1; //left
				count = 0;
			}
		}
	}
}
int main()
{
	char arr[12][12];
	cout << "Enter a 12 by 12 maze comprising of (#)(walls) and (.)(paths). Make sure there is an entrance and an exit(put a space in between every wall and path." << endl;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
		}
	}
	maze mazey(arr);
	while (true)
	{
		mazey.move();
		mazey.printMaze();
		if (mazey.ifExit())
		{
			cout << "Maze Completed!" << endl;
			break;
		}
		Sleep(500);
		system("cls");
	}
	system("pause");
}