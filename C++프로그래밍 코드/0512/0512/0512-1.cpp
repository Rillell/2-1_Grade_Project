#include<iostream>
#include<string>
using namespace std;

class Car {
protected: //Ű(���)�� ������ ���� ����
	int speed = 0;
	int gear = 0;
	string color = "white";

public:
	Car() { cout << "Car������ �Դϴ�" << endl; };
	~Car() { cout << "Car�Ҹ��� �Դϴ�" << endl; };
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
	Sport() { cout << "Sport������ �Դϴ�" << endl; };
	~Sport() { cout << "Sport�Ҹ��� �Դϴ�" << endl; };

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
	cout << "���α׷� ��" << endl;

};



//������ �Ҹ���