//Вариант 19

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct TRAIN {
	string name;
	string date;
	string type;
};

int main() {
	//setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 5;
	int count = n;
	string info;

	TRAIN mas[n];

	for (int i = 0; i < n; i++) {
		cout << "-" << i + 1 << "-\n";
		cout << "Название: "; cin >> mas[i].name;
		cout << "Тип: "; cin >> mas[i].type;
		cout << "Дата отправления: "; cin >> mas[i].date;
		cout << endl;
	}

	cout << "Введите тип поезда (пассажирский, товарный, почтовый): ";
	cin >> info;

	for (int i = 0; i < n; i++) {
		if (info == mas[i].type) {
			cout << mas[i].name << endl;
			cout << mas[i].type << endl;
			cout << mas[i].date << endl;
			cout << endl;
		}
		else {
			count--;
		}
		if (count == 0) {
			cout << "Таких поездов нет." << endl;
		}
	}

	return 0;
}