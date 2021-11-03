//���� �����
#include<iostream>
#include<string>

using namespace std;

class Radio{
	bool sw = false;
	int vol = 30;
	bool afm = true; //true : AM   false : FM
	string color = "black";
	int frep = 1000;

public:
	Radio() {
		cout << "�ȳ��ϼ��� ���� ��۱��Դϴ�" << endl;
	}
	~Radio() {
		cout << "�ȳ��������� ���� ��۶�..." << endl;
	}

	void setFrep(int f){
		frep = f;
	}
	void setVol(int v) {
		vol = v;
	}
	void setAfm(bool a) {
		afm = a;
	}
	void setSw(bool s) {
		sw = s;
	}
	int getFrep() {
		return frep;
	}


	void view() {
		if(sw == 0)
			cout << "����ġ OFF �Դϴ�" << endl;
		else
			cout << "����ġ ON �Դϴ�" << endl;
		cout << "��  �� " << vol << "�Դϴ�" << endl;

		if(afm == 0)
			cout << "����FM�Դϴ�" << endl;
		else
			cout << "����AM�Դϴ�" << endl;
		cout << "���ļ��� " << frep << "�Դϴ�" << endl;
	}
};
void main() {
	/*Radio r;
	r.setSw(true);
	r.setAfm(true);
	r.setVol(70);
	r.setFrep(1200); */

	Radio *r = new Radio();
	r->setSw(true);
	r->setAfm(true);
	r->setVol(70);
	r->setFrep(1200);

	r->view();
	//r.view();
	delete r;
}