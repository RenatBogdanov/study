#include<iostream>
using namespace std;

void DisplayMatrix(char field[8][8]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Color(char color, int i, int j, char field[8][8], int side) {
	// это верхн€€ лини€?
	bool isUpper = true;
	// цвет присутствует в р€ду?
	bool isColorIn = false;
	switch (side) {
		case 1:
			for (int k = 0; k < 8; k++) {
				if (field[i][k] != color) {
					isUpper = false;
				}
			}
			if (isUpper) {
				for (int k = 0; k < 8; k++) {
					if ((field[i + 1][k] == 'B') && (field[i - 1][k] == 'B')) {
						field[i][k] = 'B';
					}
					else field[i][k] = '.';
					if (field[i + 1][k] == 'B') {
						field[i][k] = 'B';
					}
				}
			}
			break;
		case 2:
			for (int k = 0; k < 8; k++) {
				if (field[k][j] != color) {
					isUpper = false;
				}
			}
			if (isUpper) {
				for (int k = 0; k < 8; k++) {
					if ((field[k][j + 1] == 'R') && (field[k][j - 1] == 'R')) {
						field[i][k] = 'R';
					}
					else field[k][j] = '.';
					if (field[k][j-1] == 'R') {
						field[k][j] = 'R';
					}
				}
			}
			break;
	}
}

int main() {	
	short int count;
	char field[8][8];
	bool isEnd;
	char DownColor;

	cin >> count;

	for (count; count > 0; count--) {
		isEnd = false;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> field[i][j];
			}
		}
		// поиск линий
		while (!isEnd) {
			int check = 0;
			// лева€ граница
			for (int m = 0; m <= 7; m++) {
				if (field[m][0] == 'R') {
					Color('R', m, 0, field, 1);
					check = 1;
					DownColor = 'R';
				}
			}
			// нижн€€ граница
			for (int m = 0; m <= 7; m++) {
				if (field[7][m] == 'B') {
					Color('B', 7, m, field, 2);
					check = 1;
					DownColor = 'B';
				}
			}
			// права€ граница
			for (int m = 7; m >= 0; m--) {
				if (field[m][7] == 'R') {
					Color('R', m, 7, field, 1);
					check = 1;
					DownColor = 'R';
				}
			}
			// верхн€€ граница
			for (int m = 7; m >= 0; m--) {
				if (field[0][m] == 'B') {
					Color('B', 0, m, field, 2);
					check = 1;
					DownColor = 'B';
				}
			}
			//DisplayMatrix(field);
			isEnd = true;
			if (check == 0)	isEnd = true;
			cout << DownColor << endl;
		}
	}
}