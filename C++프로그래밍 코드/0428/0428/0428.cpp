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
		cout << "고객님 어서오세요" << endl;
	}

	Car(int s, int g, string c) : speed(s), gear(g), color(c) {
		/*speed = s;
		gear = g;
		color = c */
	}

	~Car() { //소멸자, 없애야 할것, 뒷마무리
		cout << "다음에 또 오세요" << endl;
	}

	void view() {
		cout << "속도 =" << speed << endl;
		cout << "기어 =" << gear << endl;
		cout << "컬러 =" << color << endl;
		cout << "맥스 =" << MAX << endl;
	}
};

void main() {
	Car taxi(50, 2," RED");
	taxi.view();

	
	
	
	////메모리가 부족할때 동적함수 쓴다. 
	//Car *taxi = new Car;
	//taxi->view(); //객체가 파괴되지 않으면 소멸자 동작X
	//delete taxi; //객체 파괴

	cout << "프로그램 실행중 입니다." << endl;
}