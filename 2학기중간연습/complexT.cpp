#include<iostream>
using namespace std;

class Complex {
	int real;// �Ǽ�
	int imaginary; // ���

public:
	Complex() {
		real = 0;
		imaginary = 0;
	}
	Complex(int real, int imaginary) :real(real), imaginary(imaginary) {}

	void print() {
		if (real == 0 && imaginary == 0) { // �� �� 0�� ��
			cout << 0 << endl;
		}
		else if (real == 0) { // ������ 0�� ��
			if (imaginary == 1) {
				cout << "i" << endl;
			}
			else {

				cout << imaginary << "i" << endl;
			}
			
		}
		else if (imaginary == 0) { // ����� 0�� ��
			cout << real << endl;
		}
		else if (imaginary < 0) { // ����� ������ ��
			if (imaginary == -1) { // ����� �����̰� -1�� �� 1 �Է� ���ϱ� 
				cout << real << " - " << "i" << endl;
			}
			else { // ����� �����̰� -1�� �ƴ� ��
				cout << real << " - " << abs(imaginary) << "i" << endl;
			}
		}
		else if (imaginary > 0) { // ����� ����� ��
			if (imaginary == 1) { // ����� ����̰� 1�� ��
				cout << real << " + " << "i" << endl;
			}
			else {
				cout << real << " + " << imaginary << "i" << endl;
			}
		}
	}
	Complex& operator+(Complex& a) {
		Complex cTemp;
		//���3+3i
		// this = c1 �Ű����� = c2
		cTemp.real = this->real + a.real;
		cTemp.imaginary = this->imaginary + a.imaginary;

		return cTemp;
	}
	Complex& operator-(Complex& a) {
		Complex cTemp;
		//���3+3i
		// this = c1 �Ű����� = c2
		cTemp.real = this->real - a.real;
		cTemp.imaginary = this->imaginary - a.imaginary;

		return cTemp;
	}

	Complex& operator*(Complex& a) {
		Complex cTemp;

		cTemp.real = this->real * a.real - this->imaginary * a.imaginary;
		cTemp.imaginary = this->imaginary * a.real + this->real * a.imaginary;

		return cTemp;
	}


	Complex& operator++() { // ����

		this->real++;

		return *this;
	}

	Complex& operator++(int) { // ���� ���� �� ������ �� �ʿ�
		Complex cTemp;

		cTemp.real = this->real++;
		cTemp.imaginary = this->imaginary;

		return cTemp;
	}


	Complex& operator--() { // ����

		this->real--;

		return *this;
	}

	Complex& operator--(int) { // ���� ���� �� ������ �� �ʿ�
		Complex cTemp;

		cTemp.real = this->real--;
		cTemp.imaginary = this->imaginary;

		return cTemp;
	}
};
int main() {
	Complex c1(0, 0);
	Complex c2(1, 1);
	Complex c3(2, 2);
	Complex c4(0, -2);
	Complex c5(-5, 0); //x
	Complex c6(3, 0); //x
	Complex c7(0, 7);


	cout << "*****************" << endl;
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
	c6.print();
	c7.print(); 


	cout << "-----------------------------";
	cout << endl;
	c1 = c2 + c3;
	c1.print();
	c2.print();
	c3.print();
	
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&";
	cout << endl;
	c7 = c1 - c4;
	c1 = c7 - c2;
	c6 = c2 * c4;
	c1.print();
	c2.print();
	c4.print();
	c6.print();
	c7.print();

	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	cout << endl;

	Complex c8;
	Complex c9;
	c9 = ++c4;
	c4.print();
	c8.print();
	c9.print();

	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	cout << endl;

	Complex c10;
	c10 = c4++;
	c4.print();
	c10.print();

	cout << "#############################";
	cout << endl;

	Complex c11;
	c11 = c2--;
	c2.print();
	c11.print();

	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	cout << endl;

	Complex c12;
	c12 = --c2;
	c2.print();
	c12.print();

	return 0;
}