//�������� ���� ó�� ���
#include<iostream>
#include<string>

using namespace std;

void main() {
	int pizza = 10;
	int per = 0;
	int sum;
	
	cout << "���� �� �Է� : ";
	cin >> pizza;
	cout << "��� �� �Է� : ";
	cin >> per;
	
	if (per != 0) {
		sum = pizza / per;
		cout << "sum = " << sum << endl;
	}
	else
		cout << "��� ���� 0�� �Դϴ�";
	
}