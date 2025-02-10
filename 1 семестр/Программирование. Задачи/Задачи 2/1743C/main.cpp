#include<iostream>

using namespace std;

int main() {
	int n;
	int t;
	int summ;
	int temp;
	int minimal;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		summ = 0;
		int *mas = new int[n];
		char *caps = new char[n];

		for (int i = 0; i < n; i++) {
			cin >> caps[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> mas[i];
		}

		for (int i = 1; i < n; i++) {
			if (caps[i] == '1') {
				temp = i-1;
				minimal = i - 1;

				while (caps[i] == '1') {
					i++;
					if (mas[i-1] < mas[minimal]) {
						minimal = i-1;
					}
				}

				swap(caps[minimal], caps[temp]);
			}
		}

		for (int i = 0; i < n; i++) {
			if (caps[i] == '1') summ += mas[i];
		}

		delete[] mas;
		cout << summ << endl;
		cout << endl;
	}
	cout << endl;
}