#include <iostream>
#include <cmath>
#include <string>

#include <chrono>

int main() {
	setlocale(LC_ALL, "Russian");

	/*

	auto start = std::chrono::system_clock::now();

	std::string num = "122";
	std::cout << num << std::endl;

	if (num[0] == '-') {
		num = num.substr(1);
	}

	if ((num[0] == num[1]) || (num[1] == num[2]) || (num[0] == num[2])) {
		std::cout << "Есть одинаковые цифры" << std::endl;
	}
	else {
		std::cout << "Одинаковых цифр нет" << std::endl;
	}

	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	
	std::cout  << "Затраченное время: " << elapsed_seconds.count() << " секунд\n";

	*/

		
	auto start = std::chrono::system_clock::now();

	int num = 123;
	std::cout << num << std::endl;

	num = abs(num);

	int a, b, c;

	a = num % 10;
	b = num / 10 % 10;
	c = num / 100 % 10;

	if ((a == b) || (a == c) || (b == c)) {
		std::cout << "Есть одинаковые цифры" << std::endl;
	}
	else {
		std::cout << "Одинаковых цифр нет" << std::endl;
	}

	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << "Затраченное время: " << elapsed_seconds.count() << " секунд\n";
	
	

	return 0;
}