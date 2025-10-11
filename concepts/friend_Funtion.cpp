#include <bits/stdc++.h>
using namespace std;
#define ll long long
class BankAccount{
private:
    double bal;
public:
    BankAccount(double bal){
        this->bal = bal;
    }
    friend void ChangeBal(BankAccount B, int deposit);
};
void ChangeBal(BankAccount B,int deposit){
    B.bal += deposit;
    cout << "New Balance is : " << B.bal << endl;
}

class Student;
class Teacher{
public:
    int addMarks(Student s);
};
class Student{
private:
    vector<int> marks;
    friend class Teacher;
    friend int Teacher::addMarks(Student s);
public:
    Student(vector<int> marks){
        this->marks = marks;
    }
};
int Teacher::addMarks(Student s){
    int sum = 0;
    for(int i : s.marks) sum += i;
    return sum;
}
int main(){
    // your code goes here
    BankAccount b1(4999);
    ChangeBal(b1,1);

    Teacher t;
    int n = 5; // 5 subjects
    vector<int> marks(n);
    for(int i = 0 ; i < n ; i++) cin >> marks[i];
    Student s(marks);
    cout << t.addMarks(s) << endl;
    return 0;
}