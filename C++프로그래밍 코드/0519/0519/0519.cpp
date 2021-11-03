//전통적인 오류 처리 방식
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
	
	if (per != 0) {
		sum = pizza / per;
		cout << "sum = " << sum << endl;
	}
	else
		cout << "사람 수가 0명 입니다";
	
}