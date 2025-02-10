#include <iostream>
//#include <vector>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n=10; //int n;
	int chet = 0;
	int nechet = 0;

	std::cout << "¬ведите количество элементов: "; //std::cin >> n;

	int mas[n]; //std::vector<int> mas(n);

	for (int i = 0; i < n; i++) {
		mas[i] = std::rand() % 100;

	}

	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 == 0) chet += mas[i]; else nechet += mas[i];
		std::cout << mas[i] << " ";
	}


	std::cout << std::endl << "--------" << std::endl;
	std::cout << "—умма чЄтных = " << chet << std::endl;
	std::cout << "—умма нечЄтных = " << nechet << std::endl;

	if (chet > nechet) std::cout << "—умма чЄтных больше, чем нечЄтных" << std::endl;
	else if (chet < nechet) std::cout << "—умма нечЄтных больше, чем чЄтных" << std::endl;
	else std::cout << "—уммы равны" << std::endl;

	return 0;
}
