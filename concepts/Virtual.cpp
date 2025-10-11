#include <bits/stdc++.h>
using namespace std;
class Animal{
public:
  //virtual if for dynamic funtion
    virtual void makeSound() = 0; //pure abstracted funtion
    // make funtions in the parent class
};
class Dog : public Animal{
public:
    void makeSound(){ // then the funtion is completed in the child class
        cout << "barks\n";
    }
};
int main(){
    // your code goes here
    Dog d1;
    d1.makeSound(); 
    return 0;
}