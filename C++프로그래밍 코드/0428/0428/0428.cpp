#include<iostream>
#include<string>

using namespace std;

class Car {
	int speed =0;
	int gear = 0;
	string color = "white";
	const int MAX = 10;
public:
	Car() {
		cout << "���� �������" << endl;
	}

	Car(int s, int g, string c) : speed(s), gear(g), color(c) {
		/*speed = s;
		gear = g;
		color = c */
	}

	~Car() { //�Ҹ���, ���־� �Ұ�, �޸�����
		cout << "������ �� ������" << endl;
	}

	void view() {
		cout << "�ӵ� =" << speed << endl;
		cout << "��� =" << gear << endl;
		cout << "�÷� =" << color << endl;
		cout << "�ƽ� =" << MAX << endl;
	}
};

void main() {
	Car taxi(50, 2," RED");
	taxi.view();

	
	
	
	////�޸𸮰� �����Ҷ� �����Լ� ����. 
	//Car *taxi = new Car;
	//taxi->view(); //��ü�� �ı����� ������ �Ҹ��� ����X
	//delete taxi; //��ü �ı�

	cout << "���α׷� ������ �Դϴ�." << endl;
}