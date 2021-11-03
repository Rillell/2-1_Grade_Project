#include<iostream>
#include<string>
using namespace std;

class Car {
	int speed = 0;
	int gear = 0;
	string color = "white";
	const int MAX = 10;

public:
	Car() {}

	Car(int s, int g, string c) : speed(s), gear(g), color(c) {

	}

	Car(int s, int g, string c, int m) : speed(s), gear(g), color(c), MAX(m) {

	}
	Car(int m) : MAX(m) {
	}

	~Car() {}

	void view() {
		cout << "�ӵ� =" << speed << endl;
		cout << "��� =" << gear << endl;
		cout << "�÷� =" << color << endl;
		cout << "�ƽ� =" << MAX << endl;
	}
};


void main() {
	Car taxi(50, 2, "RED",200);
	taxi.view();


	cout << "���α׷� ������ �Դϴ�" << endl;

}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Car {
//	int speed = 0;
//	int gear = 0;
//	string color = "white";
//	const int MAX = 10;
//
//public:
//	Car() {}
//
//	Car(int s, int g, string c) : speed(s), gear(g), color(c) {
//
//	}
//
//	~Car() {}
//
//	void view() {
//		cout << "�ӵ� =" << speed << endl;
//		cout << "��� =" << gear << endl;
//		cout << "�÷� =" << color << endl;
//		cout << "�ƽ� =" << MAX << endl;
//	}
//};
//
//
//void main() {
//	Car taxi(50, 2, "RED");
//	taxi.view();
//
//
//	cout << "���α׷� ������ �Դϴ�" << endl;
//
//}

