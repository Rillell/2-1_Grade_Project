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
		this->speed = speed; //this�� ���������� ���� ��Ÿ��
	}

	Car(int speed, int gear) {
		this->speed = speed;
		this->gear = gear;
	}
	~Car() { //�Ҹ���, ���־� �Ұ�, �޸�����
	}

	void view() {
		cout << "�ӵ� =" << speed << endl;
		cout << "��� =" << gear << endl;
		cout << "�÷� =" << color << endl;
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
	//c1 = c3; //���簡��

	c1.view();
	c2.view();
	c3.view();
	cout << "���α׷� ������ �Դϴ�" << endl;
}