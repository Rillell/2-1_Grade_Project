//�� ����ϴ� ���α׷�
//����(sw)
#include<iostream>
#include<string>
using namespace std;


void main() {
	int coin = 0; //���� ����
	int key = 10000; //�� ���� Ű��
	int sw = 0; //sw = 1; <- /5, sw = 0; <- /2
	int count, sum;

	cout << "���� �Է��� �ּ��� : ";
	cin >> coin;

	while (coin != 0) //coin > 0
	{
		if (sw == 0){
			count = coin / key;
			sum = coin % key;
			coin = coin - (key * count);
			if(count != 0)
			cout << key << "�� : " << count << "�� " << endl;
			key = key / 2;
			sw = 1;
		}
		else {
			count = coin / key;
			sum = coin % key;
			coin = coin - (key * count);
			if (count != 0)
			cout << key << "�� : " << count << "�� " << endl;
			key = key / 5;
			sw = 0;
		}
	}
}