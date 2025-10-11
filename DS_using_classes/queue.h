#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Queue {
private:
    vector<T> q;
    int top;
    int rear;
public:
    Queue<T>(){
        top = -1;
        rear = -1;
    }
    bool isEmpty(){
        return (rear == -1 || rear < top) ? true : false;
    }
    bool isFull(){
        return (rear == INT_MAX) ? true : false;
    }
    void push(T val){
        if(isFull()){
            cout << "Queue is full\n";
            return;
        }
        if(top == -1) top = 0;
        rear++;
        q.push_back(val);
        cout << "Element Pushed : " << q[rear] << "\n";
    }
    void pop(){
        if(isEmpty()){
            cout << "Queue is Empty\n";
            return;
        }
        cout << q[top++] << " : Poped\n";
    }
    void peek(){
        if(isEmpty()){
            cout << "Queue is Empty\n";
            return;
        }
        cout << q[top] <<"\n";
    }
    void display(){
        int t = top;
        int r = rear;
        while(t <= r){
            cout << q[t] << " ";
            t++;
        }
        cout << endl;
    }
};

