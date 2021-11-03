#include<iostream>
#include<string>

using namespace std;

int sub(int p) {
	if (p == 0)
		throw p;
}
void main() {
	int pizza = 10;
	int per = 0;
	int sum;

	
	cout << "피자 수 입력 : ";
	cin >> pizza;
	cout << "사람 수 입력 : ";
	cin >> per;

	try {
		sub(per);
	
		sum = pizza / per;
		cout << "피자는 한사람당 " << sum << "입니다" << endl;
	}
	catch (...) {//int e //per이 0이면  per -> e
		cout << "사람의 수는" << per << "입니다" << endl;
	}
}