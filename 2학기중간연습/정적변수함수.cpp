#include <iostream>
#include <string.h>
using namespace std;

class CBank {
private:
    string name;      // �̸�   
    string account;      // ���¹�ȣ
    int balance;      // �Ա�
    static int cnt;      // �迭 �� ���� ���ֱ� ����

public:
    static int count;
    CBank() {
        this->name = "";
        this->account = "";
        this->balance = 0;
        count++;
    }
    CBank(string name, string account, int balance) {
        this->name = name;
        this->account = account;
        this->balance = balance;
        cout << "����" << endl;
    }
    static int getCnt() {
        return cnt;
    }

    string getAccount() {
        return account;
    }
    string getName() {
        return name;
    }
    int getBalance() {
        return balance;
    }
};
CBank* cb[10];
int CBank::cnt = 0;
int CBank::count = 0;

int main() {
    cout << CBank::count << endl;
    cb[0]->count;

}