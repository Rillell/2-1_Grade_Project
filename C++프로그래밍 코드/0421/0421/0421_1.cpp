#include<iostream>
#include<string>
using namespace std;

class DeskLamp {
	bool isOn = false;
	string color = "black";

public:
	/*void turnOn() //스위치
	{
		isOn = true;
	}
    void turnOff()
	{
		isOn = false;
	}
	*/
	
	void touch() //터치
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
		//cout << "램프가 " << isOn << "상태입니다" << endl;

		if (isOn == true)
			cout << "램프가 On 상태입니다" << endl;
		else
			cout << "램프가 Off 상태입니다" << endl;

		cout << "컬러는 : " << color << "입니다" << endl;
	}

	
};
// 0: false  1: true
void main()
{
	/*DeskLamp lamp; //객체 정적 생성
	lamp.touch();
	lamp.setColor("RED");
	lamp.view();
	lamp.touch();
	lamp.setColor("BLUE");
	lamp.view();
	//정적에서는 .을 활용한다. 
	*/

	DeskLamp *lamp = new DeskLamp; //객체 동적 생성
	lamp->touch();
	lamp->view();


	delete lamp;
}

//C언어는 메모리를 관리를 안해줍니다.
//JAVA C# 메모리를 알아서 관리를 해줍니다. 