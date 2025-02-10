#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b, summ = 0, prod = 1;

	std::cout << "Введите кол-во строк матрицы: ";
	std::cin >> a;
	std::cout << "Введите кол-во строк матрицы: ";
	std::cin >> b;

	int** mas = new int* [a];
	for (int i = 0; i < a; i++) {
		mas[i] = new int[b];
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			mas[i][j] = rand() % 100;
			std::cout << i << "-" << j << ": ";
			std::cin >> mas[i][j];
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			std::cout.width(4);
			std::cout << mas[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < a; i++) {
		summ += mas[i][i];
		prod *= mas[i][i];
	}

	std::cout << "Сумма: " << summ << std::endl;
	std::cout << "Произведение: " << prod << std::endl;

	return 0;
}
