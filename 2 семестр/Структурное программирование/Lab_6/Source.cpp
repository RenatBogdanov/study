#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

//���������, ���������� ���������� � ������
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
	cout << "��������: ";
	cin >> mas[i].name;
	cout << "���: ";
	cin >> mas[i].type;
	cout << "���� �����������: ";
	cin >> mas[i].date;
	cout << endl;
	input_array_rec(i + 1, mas, n);
}

void find_by_type_rec(int i, TRAIN* mas, int n, string info, int& count) {
	if (i == n) {
		if (count == 0) {
			cout << "����� ������� ���." << endl;
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
	//��������� ��������� �������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "�������� �����. ���������." << endl;
	cout << "�������� �������." << endl << endl;
	cout << "������� ���������� � �������:" << endl << endl;


	//���������� �������� TRAIN � �������
	const int n = 5;
	//������� ���������� �������
	int count = n;
	//��� ������
	string info;

	//������������� ������� �������� TRAIN
	TRAIN mas[n];

	input_array_rec(0, mas, n);

	//���� ���� ������
	cout << "������� ��� ������ (������������, ��������, ��������): ";
	cin >> info;


	find_by_type_rec(0, mas, n, info, count);

	system("pause");

	return 0;
}
