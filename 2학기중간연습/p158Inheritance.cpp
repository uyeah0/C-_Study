#define _CRT_SECURE_NO_WARNINGS
#include<iostream>	
using namespace std;

class CPerson {
	string name;
	int age;
public:
	CPerson() {};
	CPerson(const string& name, int age);
	void ShowPerson() {
		cout << name << "�� ���̴�" << age << "��" << endl;
	}
};
CPerson::CPerson(const string& name, int age) {
	this->name = name;
	this->age = age;
}

class Student :public CPerson {
private :
	int id;
public:
	Student();
	Student(int id, const string& name, int age);
};
Student::Student() {

}
Student::Student(int id, const string& name, int age):CPerson(name, age){
	this->id = id;
	cout << id;
	cout << "�Ⱥθ���?";
}
int main() {
	Student student(1234, "�̸�", 19);
	student.ShowPerson();
}