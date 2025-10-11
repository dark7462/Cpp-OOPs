/*
Static and Array of Classes
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class uni{
public:
    static string university;
};
string uni::university = "Aditya University";
class student : public uni{
public:
    string name;
    string roll;
    string sec;
    student(string name,string roll, string sec){
        this->name = name;
        this->roll = roll;
        this->sec = sec;
        this->university = uni::university;
    }
};
//----------------------
class Aiml : public student{
    string dept = "aiml";
    string ini_roll = "24B11AI";
public:
    Aiml(string name, string roll, string sec) : student(name, roll, sec) {
        if (roll.size() < 10) {
            this->roll = ini_roll + roll.substr(roll.size() - 3);
        }
        if (sec.size() == 1) {
            this->sec = dept + "-" + sec;
        }
    }
    void info() {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
        cout << "Section : " << sec << endl;
        cout << "College : " << uni::university << endl;
    }
};
class ds : public student{
    string dept = "ds";
    string ini_roll = "24B11DS";
public:
    ds(string name, string roll , string sec) : student(name,roll,sec){
        if(roll.size() < 10){
            this->roll = ini_roll + roll.substr(roll.size()-3);
        }
        if (sec.size() == 1) {
            this->sec = dept + "-" + sec;
        }
    }
    void info() {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
        cout << "Section : " << sec << endl;
        cout << "College : " << uni::university << endl;
    }
};
class cse : public student{
    string dept = "cse";
    string ini_roll = "24B11CS";
public:
    cse(string name, string roll , string sec) : student(name,roll,sec){
        if(roll.size() < 10){
            this->roll = ini_roll + roll.substr(roll.size()-3);
        }
        if (sec.size() == 1) {
            this->sec = dept + "-" + sec;
        }
    }
    void info() {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
        cout << "Section : " << sec << endl;
        cout << "College : " << uni::university << endl;
    }
};
class it : public student{
    string dept = "it";
    string ini_roll = "24B11IT";
public:
    it(string name, string roll , string sec) : student(name,roll,sec){
        if(roll.size() < 10){
            this->roll = ini_roll + roll.substr(roll.size()-3);
        }
        if (sec.size() == 1) {
            this->sec = dept + "-" + sec;
        }
    }
    void info() {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
        cout << "Section : " << sec << endl;
        cout << "College : " << uni::university << endl;
    }
};
void space(){
    cout << "========================================================\n";
}
int main(){
    // your code goes here
    int n;
    cin >> n;
    vector<Aiml> uni_aiml;
    for(int i = 0 ;i < n ; i++){

        string name;
        string roll;
        string sec;
        cin >> name;
        cin >> roll;
        cin >> sec;
        Aiml dummy(name,roll,sec);
        uni_aiml.push_back(dummy);
    }
    for(auto i : uni_aiml){
        space();
        i.info();
    }
    return 0;
}