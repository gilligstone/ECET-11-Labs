/*
Gil Shteyman and Parth Adhia
Writer: Parth
Lab 2_4 Tic Tac Toe


*/





#include <iostream>
#include <string>
using namespace std;
class TicTacToe {
private:
	char a[3][3];
public:
	void move(char);
	void draw();
	bool check();
	TicTacToe();
};
TicTacToe::TicTacToe() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = ' ';
		}
	}
	cout << a[0][0] << " |" << a[0][1] << " |" << a[0][2] << endl;;
	cout << "__|__|__" << endl;
	cout << a[1][0] << " |" << a[1][1] << " |" << a[1][2] << endl;;
	cout << "__|__|__" << endl;
	cout << a[2][0] << " |" << a[2][1] << " |" << a[2][2] << endl;;
	cout << "  |  |  " << endl;
}
void TicTacToe::move(char x) {
	int r, c, a1, b;
	if (x == 'X') {
		cout << "Player X enter row" << endl;
		cin >> r;
		cout << "Player X enter column" << endl;
		cin >> c;
		while (r > 3 || r < 1 || a[r - 1][c - 1] != ' ') {
			cout << "Player X enter row" << endl;
			cin >> r;
			cout << "Player X enter column" << endl;
			cin >> c;
		}
		a[r - 1][c - 1] = 'X';
	}
	if (x == 'O') {
		cout << "Player O enter row" << endl;
		cin >> r;
		cout << "Player O enter column" << endl;
		cin >> c;
		while (r > 3 || r < 1 || a[r - 1][c - 1] != ' ') {
			cout << "Player O enter row" << endl;
			cin >> r;
			cout << "Player O enter column" << endl;
			cin >> c;
		}
		a[r - 1][c - 1] = 'O';
	}

}
void TicTacToe::draw() {
	cout << a[0][0] << " |" << a[0][1] << " |" << a[0][2] << endl;;
	cout << "__|__|__" << endl;
	cout << a[1][0] << " |" << a[1][1] << " |" << a[1][2] << endl;;
	cout << "__|__|__" << endl;
	cout << a[2][0] << " |" << a[2][1] << " |" << a[2][2] << endl;;
	cout << "  |  |  " << endl;
}
bool TicTacToe::check() {
	bool d = false;
	if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') {
		cout << "player x wins" << endl; return 0;
	}
	if (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X') {
		cout << "player x wins" << endl; return 0;
	}

	if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	if (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O') {
		cout << "player o wins" << endl; return 0;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] == ' ')
				d = true;
		}
	}
	if (d == false) {
		cout << "the game ends in a draw" << endl; return 0;
	}
	return 1;
}
int main() {
	while (true) {
		TicTacToe board;
		char m = 'X';
		while (board.check()) {
			board.move(m);
			board.draw();
			if (m == 'X') {
				m = 'O';
			}
			else {
				m = 'X';
			}
		}
	}
}