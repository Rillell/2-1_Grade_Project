#include<iostream>
#include<string>

using namespace std;

void main() {
	int pizza = 10;
	int per = 0;
	int sum;


	cout << "피자 수 입력 : ";
	cin >> pizza;
	cout << "사람 수 입력 : ";
	cin >> per;

	try {
		if (per < 0) throw "negative";
		if (per == 0) throw per;

		sum = pizza / per;
		cout << "한 사람당 피자는 " << sum << "개 입니다" << endl;
	}
	catch (int e) {
		cout << "정수형 사람수는 " << e << "입니다" << endl;
	}
	catch (char *a) {
		cout << "사람 수치가 마이너스(" << a << ")입니다" << endl;
	}
	catch (...) {
		cout << "에러가 나긴 했는데 모르겠다. " << endl;
	}
		
}