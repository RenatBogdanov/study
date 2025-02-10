#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Создать двумерный массив целых чисел
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Открыть бинарный файл f для записи
    ofstream file_f("f.dat", ios::binary);
    if (!file_f.is_open()) {
        cerr << "Error opening file f" << endl;
        return 1;
    }

    // Записать массив в файл f
    file_f.write((char*)arr, sizeof(arr));

    // Закрыть файл f
    file_f.close();

    // Открыть бинарный файл g для записи
    ofstream file_g("g.dat", ios::binary);
    if (!file_g.is_open()) {
        cerr << "Error opening file g" << endl;
        return 1;
    }

    // Прочитать файл f и записать нечетные числа в файл g
    ifstream input("f.dat", ios::binary);
    if (!input.is_open()) {
        cerr << "Error opening file f" << endl;
        return 1;
    }

    int number;
    while (input.read((char*)&number, sizeof(int))) {
        // Проверить, является ли число нечетным
        if (number % 2 != 0) {
            file_g.write((char*)&number, sizeof(int));
        }
    }

    // Закрыть файлы
    input.close();
    file_g.close();

    cout << "Нечетные числа из массива записаны в файл g.dat" << endl;

    return 0;
}