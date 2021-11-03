//라디오 만들기
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
		cout << "안녕하세요 서일 방송국입니다" << endl;
	}
	~Radio() {
		cout << "안녕히가세요 다음 방송때..." << endl;
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
			cout << "스위치 OFF 입니다" << endl;
		else
			cout << "스위치 ON 입니다" << endl;
		cout << "볼  륨 " << vol << "입니다" << endl;

		if(afm == 0)
			cout << "상태FM입니다" << endl;
		else
			cout << "상태AM입니다" << endl;
		cout << "주파수는 " << frep << "입니다" << endl;
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