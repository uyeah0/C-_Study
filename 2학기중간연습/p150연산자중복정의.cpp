#define _CRT_SECURE_NO_WARNINGS
#include<iostream>	
using namespace std;

class BoxNum {
	int num1, num2;
public:
	BoxNum(int num1, int num2) :num1(num1), num2(num2) {}
	void ShowNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	BoxNum operator+(BoxNum& ref) {
		return BoxNum(num1 + ref.num1, num2 + ref.num2);
	}
	BoxNum& operator=(BoxNum& ref) {
		BoxNum nb(ref.num1, ref.num2);
		cout << "ref.num1 : " << ref.num1 << endl;
		return nb;
	}
};

int main() {
	BoxNum nb1(1, 1);
	BoxNum nb2(2,2);
	BoxNum result = nb1 + nb2;
	/*nb1.ShowNum();
	nb2.ShowNum();
	result.ShowNum();*/

	BoxNum nb3(0, 0);
	nb3 = nb2 = nb1;
	nb3.ShowNum();

	return 0;
}