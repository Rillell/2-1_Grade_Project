#include<iostream>
#include<string>

using namespace std;

class Car {
	int speed = 0;
	int gear = 0;
	string color = "white";
public:
	Car() {}

	Car(int speed) {
		this->speed = speed; //this는 멤버변수라는 것을 나타냄
	}

	Car(int speed, int gear) {
		this->speed = speed;
		this->gear = gear;
	}
	~Car() { //소멸자, 없애야 할것, 뒷마무리
	}

	void view() {
		cout << "속도 =" << speed << endl;
		cout << "기어 =" << gear << endl;
		cout << "컬러 =" << color << endl;
	}
};

Car swap(Car m1, Car m2) {
	Car temp;
	temp = m1;
	m1 = m2;
	m2 = temp;
	return temp;
}


void main() {
	//Car taxi(50);
	//taxi.view();

	Car c1;
	Car c2(50);
	Car c3(100, 3);
	c1 = swap(c2, c3);
	//c1 = c3; //복사가능

	c1.view();
	c2.view();
	c3.view();
	cout << "프로그램 실행중 입니다" << endl;
}