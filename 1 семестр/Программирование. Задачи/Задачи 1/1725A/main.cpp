#include<iostream>
using namespace std;

int main() {
	long long int m, n, count = 0, answer;
	cin >> m >> n;

	if (n > 1) {
		answer = m * n - m;
	}
	else answer = n * m - 1;
	cout << answer;
}