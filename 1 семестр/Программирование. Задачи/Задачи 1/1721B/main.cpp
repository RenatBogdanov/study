#include<iostream>
using namespace std;

int main() {
	short int n, m, sx, sy, d, count;

	cin >> count;

	for (int c = 0; c < count; c++) {
		cin >> n >> m >> sx >> sy >> d;

		//лева€ и права€ границы
		if ((sy - d <= 1) && (sy + d >= m)) {
			cout << -1 << endl;
		}
		//верхн€€ и нижн€€
		else if ((sx + d >= n) && (sx - d <= 1)) {
			cout << -1 << endl;
		}
		//верхн€€ и права€
		else if ((sx - d <= 1) && (sy + d >= m)) {
			if ((sx + d >= n) || (sy - d <= 1)) {
				cout << -1 << endl;
			} else cout << n + m - 2 << endl;
		}
		//нижн€€ и лева€
		else if ((sx + d >= n) && (sy - d <= 1)) {
			if ((sx - d <= 1) || (sy + d >= m)) {
				cout << -1 << endl;
			} cout << n + m - 2 << endl;
		}
		//нижн€€ и права€
		else if ((sx + d >= n) && (sy + d >= m)) {
			cout << -1 << endl;
		}
		//верхн€€ и лева€
		else if ((sx - d <= 1) && (sy - d <= 1)) {
			cout << -1 << endl;
		}
		else cout << n + m - 2 << endl;
	}
}