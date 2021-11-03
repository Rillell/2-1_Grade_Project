#include<iostream>
#include<string>
using namespace std;

class TV {
public:
	string color = "white";
	int ch = 0;
	int vol = 30;
	string model = "CTS-30";
	string company = "LG";

	void chUp() //채널 100까지 있다.
	{
		if (ch < 100)
			ch = ch + 1;
		else
			ch = 0;
	}

	void chDn()
	{
		if (ch > 0)
			ch = ch - 1;
		else
			ch = 100;
	}

	void chSet(int c)
	{
		if (ch > 100)
			ch = 100;
		else
			ch = c;
	}

};