#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int k, x, z = 1;

	std::cout << "¬ведите число k: ";  std::cin >> k;
	std::cout << "¬ведите число x: ";  std::cin >> x;

	for (int n = 2; n <= k; n++) {
		z *= ((2 * n + 1) * pow(x, (n + 2))) / pow((2 * n - 1), 2);
	}

	std::cout << "------" << std::endl;
	std::cout << z << std::endl;

	return 0;
}
