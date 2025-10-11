#include <bits/stdc++.h>
using namespace std;
class Bank{
    double balance;
public:
    Bank(double bal){
        this->balance = bal;
    }
    void deposit(double money){
        balance += money;
        cout << money << " Rs Deposited in your bank account\nCurrent Balance : " << balance << endl;
    }
    void Withdraw(double money){
        try{
            if(money > balance) throw "Not Sufficent Balance to Withdraw"; // Throws errors if balance is less than requirment 
            cout << "Here is your money : " << money << endl << "Current balance : " << balance - money << endl;
            balance -= money; // updateing the balance
        }catch(const char* e){
            cout << "Error : " << e << "!!\n"; // printing the error
        }
    }
    double GetBalance(){
        return balance;
    }
};
int main(){
    // your code goes here
    Bank p1(100);
    p1.Withdraw(101); // taking out monet more than balance (It'll throw error)
    p1.deposit(12); // check rest methods
    p1.GetBalance();
    return 0;
}