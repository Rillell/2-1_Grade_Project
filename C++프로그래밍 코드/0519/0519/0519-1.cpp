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

	
	cout << "���� �� �Է� : ";
	cin >> pizza;
	cout << "��� �� �Է� : ";
	cin >> per;

	try {
		sub(per);
	
		sum = pizza / per;
		cout << "���ڴ� �ѻ���� " << sum << "�Դϴ�" << endl;
	}
	catch (...) {//int e //per�� 0�̸�  per -> e
		cout << "����� ����" << per << "�Դϴ�" << endl;
	}
}