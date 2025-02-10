#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // ������� ���� ��� ������
    ifstream file("���������.txt");
    if (!file.is_open()) {
        perror("fopen");
        return 1;
    }

    // �������
    int count = 0;

    // ������ ���� ��������� �� ���������� ����� �����
    string line;
    while (getline(file, line)) {
        // ������� ����������� ������ � �������
        if (line[0] == 'c') {
            cout << line << endl;
            count++;
        }
    }

    cout << endl << endl << "���������� �����, ������������ � \"c\": " << count << endl;
    // ������� ����
    file.close();

    system("pause");
    return 0;
}