#include<iostream>
#include<string>
using namespace std;

class Car
{
	int speed = 0;
	int gear = 0;
	string color = "RED";

//������ Ŭ������ �����Ҷ�(��ü�� �����ɶ�) �� �ѹ� ������ �մϴ�. 
public:
	Car()
	{
		speed = 10;
		gear = 3;
		color = "White";
		//���� 3���� ������ �������ڰ� �ȴ�. 
	}

	Car(int s)
	{
		speed = s;
		gear = 3;
		color = "White";
	}

	Car(int s, int g)
	{
		speed = s;
		gear = g;
	}

	void view()
	{
		cout << speed << endl;
		cout << gear << endl;
		cout << color << endl;
	}
};

void main()
{
	//Car c(100); ��������
	//c.view();

	Car *c = new Car(100, 3);
	c->view();

}