#include <iostream>
using namespace std;


void f(int mas[], int len) {
	for (int i = 0; i < len; i++) {
		mas[i] += 1;
	}
}

void f (float mas[], int len) {
	for (int i = 0; i < len; i++) {
		mas[i] += 1;
	}
}

void f (char mas[], int len) {
	for (int i = 0; i < len; i++) {
		mas[i] += 1;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	
	const int n = 5;

	// �������������
	int mas_i[n];
	cout << "������� ������������� �������� �������" << endl;
	for (int i = 0; i < n; i++) {
		cin >> mas_i[i];
	}
	for (int i = 0; i < n; i++) {
		cout << mas_i[i] << " ";
	}
	cout << endl;
	f(mas_i, n);
	for (int i = 0; i < n; i++) {
		cout << mas_i[i] << " ";
	}
	cout << endl << endl;

	// ������������
	float mas_f[n];
	cout << "������� ������������ �������� �������" << endl;
	for (int i = 0; i < n; i++) {
		cin >> mas_f[i];
	}
	for (int i = 0; i < n; i++) {
		cout << mas_f[i] << " ";
	}
	cout << endl;
	f(mas_f, n);
	for (int i = 0; i < n; i++) {
		cout << mas_f[i] << " ";
	}
	cout << endl << endl;

	// ����������
	char mas_c[n];
	cout << "������� ���������� �������� �������" << endl;
	for (int i = 0; i < n; i++) {
		cin >> mas_c[i];
	}
	for (int i = 0; i < n; i++) {
		cout << mas_c[i] << " ";
	}
	cout << endl;
	f(mas_c, n);
	for (int i = 0; i < n; i++) {
		cout << mas_c[i] << " ";
	}
	cout << endl << endl;

	return 0;
}