#include<iostream>
using namespace std;

int main() {
	short int n, m, sx, sy, d, count;

	cin >> count;

	for (int c = 0; c < count; c++) {
		cin >> n >> m >> sx >> sy >> d;

		//����� � ������ �������
		if ((sy - d <= 1) && (sy + d >= m)) {
			cout << -1 << endl;
		}
		//������� � ������
		else if ((sx + d >= n) && (sx - d <= 1)) {
			cout << -1 << endl;
		}
		//������� � ������
		else if ((sx - d <= 1) && (sy + d >= m)) {
			if ((sx + d >= n) || (sy - d <= 1)) {
				cout << -1 << endl;
			} else cout << n + m - 2 << endl;
		}
		//������ � �����
		else if ((sx + d >= n) && (sy - d <= 1)) {
			if ((sx - d <= 1) || (sy + d >= m)) {
				cout << -1 << endl;
			} cout << n + m - 2 << endl;
		}
		//������ � ������
		else if ((sx + d >= n) && (sy + d >= m)) {
			cout << -1 << endl;
		}
		//������� � �����
		else if ((sx - d <= 1) && (sy - d <= 1)) {
			cout << -1 << endl;
		}
		else cout << n + m - 2 << endl;
	}
}