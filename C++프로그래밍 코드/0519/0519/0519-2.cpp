//다중 catch문
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
		if (per == 0)
			throw per;
		sum = pizza / per;
		cout << "피자는 한사람당 " << sum << "입니다" << endl;
	}

	catch (int e)
	{
		cout << "정수형 " << e << "입니다" << endl;
	}
	catch (double e)
	{
		cout << "실수형 " << e << "입니다" << endl;
	}
	catch (...) {//마지막에 와야한다. 
		cout << "사람의 수는" << per << "입니다" << endl;
	}
}