#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "¬ведите n: ";
	std::cin >> n;

	for (int i = n; i >= 1; i--) {
		for (int j = n - i + 1; j >= 1; j--) {
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = n; i>= 1; i--) {
		for (int j = n+1; j <= n-i+1; j++) {
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}
}
