#include<iostream>
#include<string>
using namespace std;

class Car
{
	int speed = 0;
	int gear = 0;
	string color = "RED";

//생성자 클래스가 시작할때(객체가 생성될때) 딱 한번 실행을 합니다. 
public:
	Car()
	{
		speed = 10;
		gear = 3;
		color = "White";
		//위의 3개가 없으면 공생성자가 된다. 
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
	//Car c(100); 정적생성
	//c.view();

	Car *c = new Car(100, 3);
	c->view();

}