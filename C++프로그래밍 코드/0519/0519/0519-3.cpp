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

	try {
		if (per < 0) throw "negative";
		if (per == 0) throw per;

		sum = pizza / per;
		cout << "�� ����� ���ڴ� " << sum << "�� �Դϴ�" << endl;
	}
	catch (int e) {
		cout << "������ ������� " << e << "�Դϴ�" << endl;
	}
	catch (char *a) {
		cout << "��� ��ġ�� ���̳ʽ�(" << a << ")�Դϴ�" << endl;
	}
	catch (...) {
		cout << "������ ���� �ߴµ� �𸣰ڴ�. " << endl;
	}
		
}