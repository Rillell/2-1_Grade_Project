//상속
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int speed = 0;
	int gear = 0;
	string color = "white";

public:
	void setGear(int g) {
		gear = g;
	}

	void speedUp() {
		speed = speed + 10;
	}

	void speedDown() {
		speed = speed - 10;
	}

	void cview() {
		cout << speed << " " << gear << "  " << color << endl;
	}
};

class Sport : public Car { //상속 //기본은 private 이므로
private:
	bool turbo = false;

public:
	void setTurbo(bool t) {
		turbo = t;
	}

	void sview() {
		cout << turbo << endl;
	}

};


void main() {
	Sport sc;
	sc.speed = 100;
	sc.setTurbo(true);
	sc.cview();
	sc.sview();
};

