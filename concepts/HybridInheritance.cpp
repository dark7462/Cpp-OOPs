#include <bits/stdc++.h>
using namespace std;
#define ll long long
class human{
public:
    string name;
    int age;
    human(){
        this->name = "";
        this->age = 0;
    }
    human(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout << "Name : " << this->name << "\n";
        cout << "Age : " << this->age << "\n";
    }
};
class student : public virtual human{
public:
    int roll_no;
    student(){
        roll_no = 0;
    }
    student(string name, int age, int roll_no) : human(name,age){
        this->roll_no = roll_no;
    }
    void display(){
        cout << "Name : " << this->name << "\n";
        cout << "Age : " << this->age << "\n";
        cout << "Roll Number : " << this->roll_no << "\n";
    }
};
class teacher : public virtual human{
public:
    string department;
    teacher(){
        department = "";
    }
    teacher(string name, int age, string department) : human(name,age){
        this->department = department;
    }
    void display(){
        cout << "Name : " << this->name << "\n";
        cout << "Age : " << this->age << "\n";
        cout << "department : " << this->department << "\n";
    }
};
class TA : public student, public teacher{
public:
    string phd;
    TA(){this->phd = "";}
    TA(string name, int age, int roll_no, string department, string phd) : human(name,age), teacher(name,age,department),student(name,age,roll_no){ // payatension to the assigment of the constructors
        this->phd = phd;
    }
    void display(){
        cout << "Name : " << this->name << "\n";
        cout << "Age : " << this->age << "\n";
        cout << "Roll Number : " << this->roll_no << "\n";
        cout << "department : " << this->department << "\n";
        cout << "pdh : " << this->phd << "\n";
    }
};
int main(){
    // your code goes here
    student Anurag("Anurag",19,014);
    teacher ashok("Ashok",27,"Cp");
    TA chinnaram("chinnaram",35,101,"Morden phy","Laser");
    chinnaram.display();
    return 0;
}