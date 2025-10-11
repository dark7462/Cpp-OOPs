#include <bits/stdc++.h>
using namespace std;
#define ll long long

class stu{
    int marks[3];
public:
    stu(int sub1, int sub2, int sub3){
        this->marks[0] = sub1;
        this->marks[1] = sub2;
        this->marks[2] = sub3;
    }
    int operator[](int pos){
        return marks[pos];
    }
};
int main(){
    // your code goes here
    stu anu(10,20,30);
    cout << anu[2] << "\n";
    return 0;
}