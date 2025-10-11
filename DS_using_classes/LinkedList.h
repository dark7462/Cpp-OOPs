#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node *next;
    node(int data){
        this->val = data;
        this->next = NULL;
    }
};
class LinkedList{
private:
    node* head;
    node* tail;
public:
    LinkedList(){
        head = tail = NULL;
    }
    void push(int val){
        if(head == NULL){
            node *newnode = new node(val);
            head = newnode;
            tail = newnode; 
        }else{
            node* newnode = new node(val);
            tail->next = newnode;
            tail = newnode;
        }
    }
    void push_front(int val){
        if(head == NULL){
            push(val);
            return ;
        }
        node *newnode = new node(val);
        newnode->next = head;
        head = newnode;
    }
    void del_head(){
        head = head->next;
    }
    void display(){
        node *temp = head;
        while(temp){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};