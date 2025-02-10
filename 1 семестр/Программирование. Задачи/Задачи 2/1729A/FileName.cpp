#include<iostream>
using namespace std;

int main() {
	int t, a, b, c;

	cin >> t;

	for (int i = 0; i < t; i++) {
		
		cin >> a >> b >> c;

		if (b > c) {
			if (a < b) cout << 1 << endl;
			else if (a > b) cout << 2 << endl;
			else cout << 3 << endl;
		}
		else {
			if (a < c + c-b) cout << 1 << endl;
			else if (a > c + c-b) cout << 2 << endl;
			else cout << 3 << endl;
		}
	}
}