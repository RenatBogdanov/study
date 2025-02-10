#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << "¬ыберите способ ввода и вывода данных (от 1 до 3): ";
	std::cin >> n;

	switch (n) {
		case 1:
		{
			double x = 1, y = 2, z = 3;
			double t, u;
			std::cout << "1" << std::endl;
			std::cout << x << " " << y << " " << z << std::endl;

			t = exp(x) * cos(y) + (1 / z);
			std::cout << "t = " << t << std::endl;

			u = pow(z, 2) - log(abs(x + pow(z, 2)));
			std::cout << "u = " << u << std::endl;

			system("pause");
			break;
		}
		
		case 2:
		{
			double x, y, z;
			double t, u;
			std::cout << "2" << std::endl;

			std::cout << "¬ведите x: ";
			std::cin >> x;
			std::cout << std::endl << "¬ведите y: ";
			std::cin >> y;
			std::cout << std::endl << "¬ведите z: ";
			std::cin >> z;
			std::cout << std::endl;

			t = exp(x) * cos(y) + (1 / z);
			std::cout << "t = " << t << std::endl;

			u = pow(z, 2) - log(abs(x + pow(z, 2)));
			std::cout << "u = " << u << std::endl;

			system("pause");
			break;
		}
		
		case 3:
		{
			double x, y, z;
			double t, u;
			printf("3\n");

			printf("¬ведите x: ");
			scanf_s("%lf", &x);
			printf("¬ведите y: ");
			scanf_s("%lf", &y);
			printf("¬ведите z: ");
			scanf_s("%lf", &z);

			t = exp(x) * cos(y) + (1 / z);
			printf("t = ");
			printf("%lf", t);
			printf("\n");

			u = pow(z, 2) - log(abs(x + pow(z, 2)));
			printf("u = ");
			printf("%lf", u);
			printf("\n");

			system("pause");
			break;
		}
		default:
			std::cout << "„исло не находитс€ в диапозоне от 1 до 3" << std::endl;
			break;		
	}

	return 0;
}