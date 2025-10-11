/*
🧩 Problem 2: Bank Account System
Create a class BankAccount with:
•	Private: balance, accountNumber
•	Public: holderName
•	Use constructor to initialize account details.
•	Methods: deposit(), withdraw(), checkBalance()
✅ Use: Class, Constructor, Encapsulation, Access Modifiers
*/
#include <bits/stdc++.h>
using namespace std;
class BankAccount{
private:
    double Balance;
    int Account_Number;
public:
    string Holder_name;
    BankAccount(double bal,int acc_num,string na){
        set_acc_bal(bal);
        set_acc_num(acc_num);
        this->Holder_name = na;
    }
    void set_acc_num(int &acc_num){
        Account_Number = acc_num;
    }
    void set_acc_bal(double &bal){
        Balance = bal;
    }
    int get_acc_num(){
        return Account_Number;
    }
    double get_acc_bal(){
        return Balance;
    }
    void info(){
        cout << "Account Number : " << get_acc_num() << endl;
        cout << "Account holder : " << Holder_name << endl;
        cout << "Account Balance : " << get_acc_bal() << endl;
    }


    //deposit
    void deposit(double add){
        Balance += add;
        cout << "Amount deposited : " << add << endl;
        checkBalance();
    }
    //withdraw
    void withdraw(double out){
        Balance -= out;
        cout << "Amount withdrawed : " << out << endl;
        checkBalance();
    }
    //checkBalance
    void checkBalance(){
        cout << "Current Balance : " << get_acc_bal() << endl;
    }
};
void printSpace(){
    cout << "=============================================================\n";
}
#define ll long long
int main(){
    // your code goes here
    BankAccount b1(230000, 678211, "Anurag");
    b1.info();
    printSpace();
    b1.deposit(9034);
    printSpace();
    b1.withdraw(390);
    printSpace();
    b1.checkBalance();

    return 0;
}