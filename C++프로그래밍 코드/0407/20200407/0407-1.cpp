#include<iostream>
#include<string>
using namespace std;

class Car {
public: //���� ����
		//private: ���Ȼ���, �ܺο��� ���� �Ұ�
	string color = "RED";
	int speed = 0;
	int mileage = 2000;
	char gear = 3;
	string model;
	double oil = 0;

	
	void oilSet(int o) {
		if (o < 100)
			oil = 0;
		else
			cout << "������ Full �Դϴ�" << endl;
	}

	void speedUp()
	{
		if (speed < 100)
			speed = speed + 10;
		else
			speed = 100;
	}

	void speedDn()
	{
		if (speed > 0)
			speed = speed - 10;
		else
			speed = 0;
	}

	void view()
	{
		cout << "speed = " << speed << endl;
		cout << "color = " << color << endl;
	}
};

void main()
{
	Car taxi, truck;
	//taxi.speed = 100;
	taxi.speedUp();
	taxi.view();

	truck.speedUp();
}

/*
TV

string color = "white";
int ch = 0;
int vol = 30;
string model = "CTS-30";
string company = "LG";

void chUp() //ä�� 100���� �ִ�.
{
   if(ch <100)
      ch = ch + 1;
   else
      ch = 0;
}

void chDn()
{
if(ch > 0)
ch = ch - 1;
else
ch= 100;
}

void chSet(int c)
{
if(ch >100)
ch = 100
else
ch = c;
}

MFC


*/
/*
int a, b, c;
c = a + b;
print ("%d", c);


class Add{
int a;
int b;
int sum;

void plus(int a, int b)
{
sum = a+ b;
}


void minus(int a, int b)
{
sum = a- b;
}

mul()
div()

main
{

}

}

*/