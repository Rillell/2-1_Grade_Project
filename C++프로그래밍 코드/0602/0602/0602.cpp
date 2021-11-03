//돈 계산하는 프로그램
//핑퐁(sw)
#include<iostream>
#include<string>
using namespace std;


void main() {
	int coin = 0; //현금 투입
	int key = 10000; //돈 단위 키값
	int sw = 0; //sw = 1; <- /5, sw = 0; <- /2
	int count, sum;

	cout << "돈을 입력해 주세요 : ";
	cin >> coin;

	while (coin != 0) //coin > 0
	{
		if (sw == 0){
			count = coin / key;
			sum = coin % key;
			coin = coin - (key * count);
			if(count != 0)
			cout << key << "원 : " << count << "장 " << endl;
			key = key / 2;
			sw = 1;
		}
		else {
			count = coin / key;
			sum = coin % key;
			coin = coin - (key * count);
			if (count != 0)
			cout << key << "원 : " << count << "장 " << endl;
			key = key / 5;
			sw = 0;
		}
	}
}