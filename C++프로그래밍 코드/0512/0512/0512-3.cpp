#include<iostream>
#include<string>
using namespace std;

class Car {
	int speed = 0;
	int gear = 0;
public:
	void sub1()
	{
		cout << "Car Ŭ���� �Դϴ�" << endl;
	}
};

class Sport {
	int turbo = 0;

public:
	void sub2()
	{
		cout << "Sport Ŭ���� �Դϴ�" << endl;
	}
};

class Taxi : public Car, public Sport {
	int meter = 0;
public:



};


void main() {
	Taxi t;
	t.sub1();
	t.sub2(); //1,2���� �ϸ� �Լ��� ��ȣ����.

}
