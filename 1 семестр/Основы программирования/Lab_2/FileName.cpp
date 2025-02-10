#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << "Введите номер задачи (от 1 до 3): ";
	std::cin >> n;

	switch (n) {
		case 1:
		{
			double x, y, z;
			double summ;

			std::cout << "Введите значения для x, y и z: " << std::endl;
			std::cout << "x = ";
			std::cin >> x;
			std::cout << "y = ";
			std::cin >> y;
			std::cout << "z = ";
			std::cin >> z;

			std::cout << x << " " << y << " " << z << std::endl;

			summ = x + y + z;
			std::cout << "Сумма равна " << summ << std::endl;

			if (summ < 1) {
				if (x < y) {
					if (x < z) {
						x = (y + z) / 2;
					}
					else {
						z = (x + y) / 2;
					}
				}
				else if (y < z) {
					y = (x + z) / 2;
				}
				else {
					z = (x + y) / 2;
				}
			}
			else {
				if (x < y) {
					x = (y + z) / 2;
				}
				else {
					y = (x + z) / 2;
				}
			}

			std::cout << "Значения после операций: " << x << " " << y <<  " " << z << std::endl;

			break;
		}
		case 2:
		{	
			int num;
			std::cout << "Введите число: " << std::endl; std::cin >> num;
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
			break;
		}
		case 3:
		{
			double x = -1.2, y = 3.85, z = 15;
			double t, u;

			t = exp(x) * cos(y) + (1/z);
			u = pow(z, 2) - log(abs(x+pow(z,2)));

			std::cout << "x = " << x << " y = " << y << " z = " << z << std::endl;
			std::cout << "t = " << t << ", u = " << u << std::endl;

			if (t > u) {
				std::cout << "True" << std::endl;
			}
			else if (t < u) {
				std::cout << "False" << std::endl;
			}

			break;
		}
		default:
		{
			std::cout << "Число не находится в диапозоне от 1 до 3!";
			break;
		}
	}


	return 0;
}