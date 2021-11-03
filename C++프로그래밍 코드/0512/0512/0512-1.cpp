#include<iostream>
#include<string>
using namespace std;

class Car {
protected: //키(상속)가 있으면 접근 가능
	int speed = 0;
	int gear = 0;
	string color = "white";

public:
	Car() { cout << "Car생성자 입니다" << endl; };
	~Car() { cout << "Car소멸자 입니다" << endl; };
	void setGear(int g) {
		gear = g;
	}

	void speedUp() {
		speed = speed + 10;
	}

	void speedDown() {
		speed = speed - 10;
	}
};

class Sport : public Car {
private:
	bool turbo = false;

public:
	Sport() { cout << "Sport생성자 입니다" << endl; };
	~Sport() { cout << "Sport소멸자 입니다" << endl; };

	void setTurbo(bool t) {
		turbo = t;
	}

	void view() {
		if (turbo == true)
			cout << "Turbo On" << endl;
		else
			cout << "Turbo Off" << endl;
		cout << speed << " " << gear << "  " << color << endl;
	}

};



void main() {
	Sport *sc = new Sport();

	sc->view();

	delete sc;
	cout << "프로그램 끝" << endl;

};



//생성자 소멸자