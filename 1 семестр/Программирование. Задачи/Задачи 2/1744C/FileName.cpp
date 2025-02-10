#include <iostream>
using namespace std;

int main() {
    int t, n, a, temp, garant;
    char c;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> c;

        char* mas = new char[n];

        for (int j = 0; j < n; j++) {
            cin >> mas[j];
        }
 
        garant = 0;

        for (int j = 0; j < n; j++) {
            a = j;
            temp = 0;

            if ((mas[j] == c) && (mas[j - 1] != c)) {
                while (mas[a] != 'g') {
                    if (a < n - 1) a++;
                    else a = 0;

                    temp++;
                }

                garant = max(garant, temp);
            }
        }
        cout << garant << endl;

        delete[] mas;
    }
    return 0;
}