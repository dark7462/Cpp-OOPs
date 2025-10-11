#include <bits/stdc++.h>
using namespace std;
#define ll long long

class stu{
    int marks;
public:
    stu(){
        marks = 0;
    }
    stu(int a){
        this->marks = a;
    }
    stu operator++(int){
        stu temp(*this);
        this->marks+=1;
        return temp;
    }
    friend stu operator--(stu &obj,int);
    void display(){
        cout << this->marks << "\n";
    }
};
stu operator--(stu &obj,int){
    stu temp = obj;  // Create a copy
    obj.marks-=1;    // Increment original
    return temp;     // Return the copy
}
int main(){
    // your code goes here
    stu anu(20);
    (anu--).display();
    anu.display();
    (anu++).display();
    anu.display();
    return 0;
}