#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // ������� ��������� ������ ����� �����
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // ������� �������� ���� f ��� ������
    ofstream file_f("f.dat", ios::binary);
    if (!file_f.is_open()) {
        cerr << "Error opening file f" << endl;
        return 1;
    }

    // �������� ������ � ���� f
    file_f.write((char*)arr, sizeof(arr));

    // ������� ���� f
    file_f.close();

    // ������� �������� ���� g ��� ������
    ofstream file_g("g.dat", ios::binary);
    if (!file_g.is_open()) {
        cerr << "Error opening file g" << endl;
        return 1;
    }

    // ��������� ���� f � �������� �������� ����� � ���� g
    ifstream input("f.dat", ios::binary);
    if (!input.is_open()) {
        cerr << "Error opening file f" << endl;
        return 1;
    }

    int number;
    while (input.read((char*)&number, sizeof(int))) {
        // ���������, �������� �� ����� ��������
        if (number % 2 != 0) {
            file_g.write((char*)&number, sizeof(int));
        }
    }

    // ������� �����
    input.close();
    file_g.close();

    cout << "�������� ����� �� ������� �������� � ���� g.dat" << endl;

    return 0;
}