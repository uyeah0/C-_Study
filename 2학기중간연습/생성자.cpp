#include<iostream>
using namespace std;

class Student {
public:
	int hak =0;
	char* name;

	Student() {
		cout << "생성자 왔다감" << endl;
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
		cout << "사라짐" << endl;
	}
};

int main() {

	/*Student* stu[3];
	stu[0] = new Student();
	stu[1] = new Student(1234, "이예영");
	stu[2] = new Student(5678, "최예영");
	stu[1]->name = "바꿈영";
	(*stu[1]).name = "또바영";
	stu[1]->print();
	delete[] stu;

	cout << "몇명?";
	int n;
	cin >> n;
	Student* st = new Student[n];
	st[0].name = "마피아";
	st[0].print();
	delete[] st;*/
}