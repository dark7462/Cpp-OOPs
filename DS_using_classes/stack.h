#include <bits/stdc++.h>
using namespace std;
#define ll long long
template<typename T>
class Stack{
private:
    int t;
    vector<T> st;
public:
    Stack <T>(){
        t = -1;
    }
    //Empty
    bool isEmpty(){
        return t == -1;
    }
    //Full
    bool isFull(){
        return t == INT_MAX;
    }
    //push
    void push(int val){
        if(isFull()){
            cout << "Stack is full\n";
            return;
        }
        t++;
        st.push_back(val);
    }
    //pop
    void pop(){
        if(isEmpty()){
            cout << "No Elements at Stack\n";
            return;
        }
        cout << st[t--] << " : Poped\n";
    }
    //top
    T top(){
        if(isEmpty()){
            cout << "No Elements at Stack\n";
            return;
        }
        return st[t];
    }
    void display(){
        if(isEmpty()){
            cout << "No Elements at Stack\n";
            return;
        }
        int i = -1;
        while(++i <= t){
            cout << st[i] << " ";
        }
        cout << endl;
    }


};