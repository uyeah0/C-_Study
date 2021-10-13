#include <iostream>
#include <string.h>
using namespace std;

class CBank {
private:
    string name;      // 이름   
    string account;      // 계좌번호
    int balance;      // 입금
    static int cnt;      // 배열 방 갯수 세주기 위해
    static double count;
public:
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
        cout << "생성" << endl;
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
int CBank::count = 1.8;

int main() {
    cout << CBank::count << endl;
    cb[0]->count;

}
