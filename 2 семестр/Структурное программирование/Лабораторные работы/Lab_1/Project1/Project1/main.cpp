#include <iostream>
#include <string>

using namespace std;

struct Point {
	int x, y;
};

struct Tree {
	string name;
	int ages;
	bool is_alive;
	float height;
	Point place;

	void get_info() {
		cout << "Name: " << name << ". Age: " << ages;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	Tree dub;
	dub.name = "ƒуб";
	dub.ages = 24;
	dub.place.x = 100;
	dub.place.y = 10;

	Tree yelka;
	yelka.name = "®лка";
	yelka.ages = 5;
	yelka.place.x = 50;
	yelka.place.y = 10;

	// cout << dub.name << " - " << yelka.name;
	dub.get_info();
	yelka.get_info();

	return 0;
}