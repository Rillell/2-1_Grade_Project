
#include<iostream>
#include<string>
	using namespace std;

	class Automatic {
		int drink[10]; //1: �ݶ�, 2: ���̴�, 3: ȯŸ, 4: �̿�, 5: Ŀ��
		int in, out, number, count, money;  //1: �ݶ�, 2: ���̴�  3: ȯŸ
	public:
		Automatic(int a, int b, int c, int d, int e) {
			cout << "�ڵ��Ǹű� �۵��մϴ�" << endl;
			drink[1] = a;
			drink[2] = b;
			drink[3] = c;
			drink[4] = d;
			drink[5] = e;
		}


		~Automatic() {
			cout << "�ڵ��Ǹű� �۵� �����մϴ�" << endl;
		}

		void setIn() {
			cout << "���� �Է����ּ��� :";
			cin >> in;
		}

		int getIn() {
			return in;
		}

		int getOut() {
			return out;
		}

		void setNumber() {
			cout << "1: �ݶ�, 2: ���̴�, 3: ȯŸ, 4: �̿�, 5: Ŀ��" << endl;
			cout << "���Ḧ ������ �ּ��� :";
			cin >> number;
		}

		void setCount() {
			cout << "����� ��� �����Ͻó��� :";
			cin >> count;
		}

		void view()
		{
			cout << "" << endl;
			cout << "---------------------------------------------" << endl;
			cout << "" << endl;

			cout << "���Աݾ� :" << in << "��" << endl;
			//		cout << "�������� :" << number << endl; //qqq  ���� PUSH 

			if (number == 1)
				cout << "�ݶ� ����" << endl;
			else if (number == 2)
				cout << "���̴� ����" << endl;
			else if (number == 3)
				cout << "ȯŸ ����" << endl;
			else if (number == 4)
				cout << "�̿� ����" << endl;
			else
				cout << "Ŀ�� ����" << endl;

			cout << "����� :" << count << "��" << endl;
			cout << "���Աݾ� :" << drink[number] * count << "��" << endl;
			out = in - (drink[number] * count);
			cout << "��ȯ�ݾ� : " << out << "��" << endl;

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