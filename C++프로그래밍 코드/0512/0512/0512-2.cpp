//오버로딩 오버라이딩
#include<iostream>
#include<string>
using namespace std;

class Car {
protected:
	int speed = 0;
	int gear = 0;

public:
	int getHp() {
		return 100;
	}

};

class Sport : public Car {
private:


public:
	int getHp() {
		return 300;
	}

	void view() {
		cout << Car::getHp() << endl;
		cout << speed << " " << gear << endl;
	}

};


void main() {
	Sport sc;
	cout << sc.Car ::getHp() << endl;
}
