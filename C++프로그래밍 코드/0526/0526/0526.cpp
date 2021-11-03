
#include<iostream>
#include<string>
	using namespace std;

	class Automatic {
		int drink[10]; //1: 콜라, 2: 사이다, 3: 환타, 4: 이온, 5: 커피
		int in, out, number, count, money;  //1: 콜라, 2: 사이다  3: 환타
	public:
		Automatic(int a, int b, int c, int d, int e) {
			cout << "자동판매기 작동합니다" << endl;
			drink[1] = a;
			drink[2] = b;
			drink[3] = c;
			drink[4] = d;
			drink[5] = e;
		}


		~Automatic() {
			cout << "자동판매기 작동 중지합니다" << endl;
		}

		void setIn() {
			cout << "돈을 입력해주세요 :";
			cin >> in;
		}

		int getIn() {
			return in;
		}

		int getOut() {
			return out;
		}

		void setNumber() {
			cout << "1: 콜라, 2: 사이다, 3: 환타, 4: 이온, 5: 커피" << endl;
			cout << "음료를 선택해 주세요 :";
			cin >> number;
		}

		void setCount() {
			cout << "음료수 몇개를 구입하시나요 :";
			cin >> count;
		}

		void view()
		{
			cout << "" << endl;
			cout << "---------------------------------------------" << endl;
			cout << "" << endl;

			cout << "투입금액 :" << in << "원" << endl;
			//		cout << "선택음료 :" << number << endl; //qqq  음료 PUSH 

			if (number == 1)
				cout << "콜라 선택" << endl;
			else if (number == 2)
				cout << "사이다 선택" << endl;
			else if (number == 3)
				cout << "환타 선택" << endl;
			else if (number == 4)
				cout << "이온 선택" << endl;
			else
				cout << "커피 선택" << endl;

			cout << "몇개선택 :" << count << "개" << endl;
			cout << "구입금액 :" << drink[number] * count << "원" << endl;
			out = in - (drink[number] * count);
			cout << "반환금액 : " << out << "원" << endl;

			cout << "" << endl;
			cout << "---------------------------------------------" << endl;
		}
	};

	void main() {
		Automatic m(1000, 1300, 1500, 1200, 900);
		m.setIn();
		m.setNumber();
		m.setCount();

		m.view();

	}