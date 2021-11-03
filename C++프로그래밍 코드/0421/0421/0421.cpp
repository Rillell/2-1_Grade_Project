#include<iostream>
using namespace std;

void sub()
{
	cout << "서브 함수입니다" << endl;
}

void  sub(int num)
{
	cout << "서브 : " << num << "함수입니다" << endl;
}

void  sub(double num)
{
	cout << "서브 : " << num << "함수입니다" << endl;
}


//함수의 중복 정의
void main()
{
	sub();
	sub(100);
	sub(35.45);
}