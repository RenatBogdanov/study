#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

//Структура, содержащая информацию о поезде
struct TRAIN {
	string name;
	string date;
	string type;
};

void input_array_rec(int i, TRAIN* mas, int n) {
	if (i == n) {
		return;
	}
	cout << "-" << i + 1 << "-\n";
	cout << "Название: ";
	cin >> mas[i].name;
	cout << "Тип: ";
	cin >> mas[i].type;
	cout << "Дата отправления: ";
	cin >> mas[i].date;
	cout << endl;
	input_array_rec(i + 1, mas, n);
}

void find_by_type_rec(int i, TRAIN* mas, int n, string info, int& count) {
	if (i == n) {
		if (count == 0) {
			cout << "Таких поездов нет." << endl;
		}
		return;
	}
	if (info == mas[i].type) {
		cout << mas[i].name << endl;
		cout << mas[i].type << endl;
		cout << mas[i].date << endl;
		cout << endl;
	}
	else {
		count--;
	}
	find_by_type_rec(i + 1, mas, n, info, count);
}

int main() {
	//Установка кодировки консоли
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Богданов Ренат. Структуры." << endl;
	cout << "Описание поездов." << endl << endl;
	cout << "Введите информацию о поездах:" << endl << endl;


	//Количество структур TRAIN в массиве
	const int n = 5;
	//Счётчик подходящих поездов
	int count = n;
	//Тип поезда
	string info;

	//Инициализация массива структур TRAIN
	TRAIN mas[n];

	input_array_rec(0, mas, n);

	//Ввод типа поезда
	cout << "Введите тип поезда (пассажирский, товарный, почтовый): ";
	cin >> info;


	find_by_type_rec(0, mas, n, info, count);

	system("pause");

	return 0;
}
