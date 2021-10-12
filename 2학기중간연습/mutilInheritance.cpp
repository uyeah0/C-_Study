#include<iostream>
using namespace std;

class JumsuOne {
	int one = 0;
public:
	int one1 = 0;
	void FuncOneShow() {
		cout << "JumsuOne" << endl;
	}
};

class RankTwo {
	int two = 2;
public:
	void FuncTwoShow() {
		cout << "FuncTwoShow" << endl;
	}
protected:
	void proTwo() {
		cout << "tow";
	}
};

class SungjukDerived : private JumsuOne,  public RankTwo {
public:
	void SungjukFuncShow() {
		cout << one1 << endl;
		FuncOneShow();
		FuncTwoShow();
	}
};

void main() {
	SungjukDerived sdr;
	sdr.SungjukFuncShow();
	//sdr.FuncOneShow();
}