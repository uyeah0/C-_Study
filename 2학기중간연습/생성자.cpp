#include<iostream>
using namespace std;

class Student {
public:
	int hak =0;
	char* name;

	Student() {
		cout << "������ �Դٰ�" << endl;
	}
	Student(int hak,const char* sname):hak(hak){
		this->name = new char[20];
		strcpy_s(this->name, 20, sname);

	}
	void print() {
		cout << hak << endl;
		cout << name << endl;
	}
	Student& operator=(Student& ref) {
		delete[]name;
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		hak = ref.hak;
		return *this;
	}
	~Student(){
		cout << "�����" << endl;
	}
};

int main() {

	/*Student* stu[3];
	stu[0] = new Student();
	stu[1] = new Student(1234, "�̿���");
	stu[2] = new Student(5678, "�ֿ���");
	stu[1]->name = "�ٲ޿�";
	(*stu[1]).name = "�ǹٿ�";
	stu[1]->print();
	delete[] stu;

	cout << "���?";
	int n;
	cin >> n;
	Student* st = new Student[n];
	st[0].name = "���Ǿ�";
	st[0].print();
	delete[] st;*/
}