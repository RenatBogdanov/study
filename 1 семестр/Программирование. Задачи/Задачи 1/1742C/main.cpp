#include<iostream>
using namespace std;

int main() {	
	short int count;
	short int symbols;
	char field[8][8];
	bool end;

	cin >> count;

	for (count; count > 0; count--) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> field[i][j];
			}
		}
		end = false;
		while (!end) {
			symbols = 0;
			// лева€ граница
			for (int m = 0; m <= 7; m++) {
				if (field[m][0] == 'R') {
					symbols = 0;
					for (int n = 0; n <= 7; n++)
					{
						if (field[m][n] == 'R') {
							symbols++;
						}
					}
					if (symbols == 8) {
						cout << 'R';
						cout << endl;
						end = true;
						break;
					}
				}
			}
			
			symbols = 0;
			// нижн€€ граница
			for (int m = 0; m <= 7; m++) {
				if (field[7][m] == 'B') {
					symbols = 0;
					for (int n = 0; n <= 7; n++)
					{
						if (field[n][m] == 'B') {
							symbols++;
						}
					}
					if (symbols == 8) {
						cout << 'B';
						cout << endl;
						end = true;
						break;
					}
				}
			}
			
		}
	}
}