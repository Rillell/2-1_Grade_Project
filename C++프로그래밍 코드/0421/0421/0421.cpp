#include<iostream>
using namespace std;

void sub()
{
	cout << "���� �Լ��Դϴ�" << endl;
}

void  sub(int num)
{
	cout << "���� : " << num << "�Լ��Դϴ�" << endl;
}

void  sub(double num)
{
	cout << "���� : " << num << "�Լ��Դϴ�" << endl;
}


//�Լ��� �ߺ� ����
void main()
{
	sub();
	sub(100);
	sub(35.45);
}