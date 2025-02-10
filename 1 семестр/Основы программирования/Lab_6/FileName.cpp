#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 3;
    bool edin = false;

    std::cout << "Размерность матрицы: " << n << std::endl;

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << i + 1 << "-" << j + 1 << ": ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "--------" << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    while (!edin) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i == j) && (matrix[i][j] != 1)) {
                    edin = true;
                }
                else if (matrix[i][j] != 0) {
                    edin = true;
                }
            }
            std::cout << std::endl;
        }
        break;
    }

    if (edin == false) std::cout << "Матрица единичная" << std::endl;
    else std::cout << "Матрица не единичная!" << std::endl;


    return 0;
}
