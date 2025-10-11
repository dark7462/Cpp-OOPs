/*
🧩 Problem 1: Student Profile Manager
Create a class Student with the following:
•	Private: rollNo, marks
•	Public: name, branch
•	Use constructor to initialize all data.
•	Create setter and getter for marks.
•	Method to display student details.
✅ Use: Class, Object, Private/Public, Constructor, Encapsulation
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Student{
private:
    string roll_no;
    int marks;
public:
    string name;
    string branch;
    Student(string r, int m, string n, string b){
        this->roll_no = r;
        this->marks = m;
        this->name = n;
        this->branch = b;
    }
    void set_marks(int ma){
        marks = ma;
    }
    void set_roll(int rol){
        roll_no = rol;
    }
    string get_roll_no(){
        return roll_no;
    }
    int get_marks(){
        return marks;
    }
    void info(){
        cout << "Name : " << name << endl;
        cout << "Roll No : " << get_roll_no() << endl;
        cout << "Marks : " << get_marks() << endl;
        cout << "Branch : " << branch << endl;
    }
};
int main(){
    // your code goes here
    Student s1("24b11ai014",98,"Anurag","Ai/ml");
    s1.info();
    return 0;
}