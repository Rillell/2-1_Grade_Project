#include<iostream>
#include<string>
using namespace std;

class DeskLamp {
	bool isOn = false;
	string color = "black";

public:
	/*void turnOn() //����ġ
	{
		isOn = true;
	}
    void turnOff()
	{
		isOn = false;
	}
	*/
	
	void touch() //��ġ
	{
		if (isOn == true)
			isOn = false;
		else
			isOn = true;
	}

	void setColor(string c)
	{
		color = c;
	}

    void view()
	{
		//cout << "������ " << isOn << "�����Դϴ�" << endl;

		if (isOn == true)
			cout << "������ On �����Դϴ�" << endl;
		else
			cout << "������ Off �����Դϴ�" << endl;

		cout << "�÷��� : " << color << "�Դϴ�" << endl;
	}

	
};
// 0: false  1: true
void main()
{
	/*DeskLamp lamp; //��ü ���� ����
	lamp.touch();
	lamp.setColor("RED");
	lamp.view();
	lamp.touch();
	lamp.setColor("BLUE");
	lamp.view();
	//���������� .�� Ȱ���Ѵ�. 
	*/

	DeskLamp *lamp = new DeskLamp; //��ü ���� ����
	lamp->touch();
	lamp->view();


	delete lamp;
}

//C���� �޸𸮸� ������ �����ݴϴ�.
//JAVA C# �޸𸮸� �˾Ƽ� ������ ���ݴϴ�. 