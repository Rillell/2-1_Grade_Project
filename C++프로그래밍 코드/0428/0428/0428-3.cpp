//#include<iostream>
//#include<string>
//using namespace std;
//
//class Car {
//	int speed = 0;
//	int gear = 0;
//	string color = "white";
//
//public:
//	static int count; //정적 멤버 변수
//
//	Car() { count++; }
//
//	Car(int speed) {
//		this->speed = speed;
//		count++;
//	}
//
//	Car(int speed, int gear) {
//		this->speed = speed;
//		this->gear = gear;
//		count++;
//	}
//
//	~Car() {}
//
//	void view() {
//		cout << "속도 =" << speed << endl;
//		cout << "기어 =" << gear << endl;
//		cout << "컬러 =" << color << endl;
//		cout << "카터 =" << count << endl;
//	}
//};
//
//void swap(Car *m1, Car *m2) {
//	Car temp;
//	temp = *m1;
//	*m1 = *m2;
//	*m2 = temp;
//}
//
//int Car::count = 0;
//
//void main() {
//	Car c1;
//	c1.view();
//	Car c2(50);
//	c2.view();
//	Car c3(100, 3);
//	c3.view();
//	swap(&c1, &c2);
//}

#include<iostream>
#include<string>
using namespace std;

class Car {
	int speed = 0;
	int gear = 0;
	string color = "white";

public:
	static int count;

	Car() { count++; }

	Car(int speed) {
		this->speed = speed;
		count++;
	}

	Car(int speed, int gear) {
		this->speed = speed;
		this->gear = gear;
		count++;
	}

	~Car() {}

	void view() {
		cout << "속도 =" << speed << endl;
		cout << "기어 =" << gear << endl;
		cout << "컬러 =" << color << endl;
		cout << "카터 =" << count << endl;
	}
};

void swap(Car *m1, Car *m2) {
	Car temp;
	temp = *m1;
	*m1 = *m2;
	*m2 = temp;
}

int Car::count = 0;

void main() {
	Car c1;
	Car c2(50);
	Car c3(100, 3);
	swap(&c1, &c2);

	c1.view();
	c2.view();
	c3.view();

}
