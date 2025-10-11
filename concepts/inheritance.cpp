#include <bits/stdc++.h>
using namespace std;
#define ll long long

class perent{
public:
    int data;
    perent(){
        this->data = 0;
    }
    perent(int data){
        this->data = data;
    }
    void show(){
        cout << "Data from perent : "<< this->data << "\n";
    }
};

class child : public perent{ // single level inheritence
public:
    string name;
    child(){
        this->data = 0;
    }
    child(int data, string name) : perent(data){ // multi level inheritence
        this->name = name;
    }
    void display(){
        cout << "Data from child : " << this->data  << "\n";
        cout << "Name of the child : " << this->name << "\n";
    }
};

class grandchild : public child{
public:
    string degree;
    grandchild(int data, string name, string degree) : child(data,name){
        this->degree = degree;
    }
};  

int main(){
    // your code goes here
    child node(90,"Anurag");
    // node.data = 10;
    node.show();
    node.display();
    return 0;
}