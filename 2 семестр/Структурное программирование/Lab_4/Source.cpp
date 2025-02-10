#include <iostream>
using namespace std;

float& f1(float& x) {
	//Точность вычисления
	float toch = 0.5 * pow(10, -3);
	float summ = 0;
	float el = 1024;
	int n = 0;
	while (true) {
		el = 1 / ((2 * n + 1) * pow(x, 2 * n + 1));
		if (el >= toch) {
			summ += el;
			n++;
		}
		else break;
	}
	return summ;
}

int main() {
	//Значение
	float x = 1.5;

	cout << f1(x) << endl;
	system("pause");
}
