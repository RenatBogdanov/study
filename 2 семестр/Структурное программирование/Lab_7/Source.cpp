#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Открыть файл для чтения
    ifstream file("Заготовка.txt");
    if (!file.is_open()) {
        perror("fopen");
        return 1;
    }

    // Счётчик
    int count = 0;

    // Читать файл построчно до достижения конца файла
    string line;
    while (getline(file, line)) {
        // Вывести прочитанную строку в консоль
        if (line[0] == 'c') {
            cout << line << endl;
            count++;
        }
    }

    cout << endl << endl << "Количество строк, начинающихся с \"c\": " << count << endl;
    // Закрыть файл
    file.close();

    system("pause");
    return 0;
}