#include <bits/stdc++.h>
using namespace std;

class parent{
public:
    int ex;
    parent(){
        cout << "Constructor Without Args\n";
    } // contructor overloading
    parent(int ex){
        this->ex = ex;
        cout << "Constructor With Args\n";
    }

};
class Complex{
public:
    int real;
    int image;
    Complex(){}
    Complex(int real, int image){
        this->image = image;
        this->real = real;
    }
    Complex operator+(Complex i2){ //operator overloading
        Complex temp; 
        temp.real = this->real + i2.real;
        temp.image = this->image + i2.image;
        return temp;
    }
    void Show(){
        cout << "Real number : " << this->real  << "\n";
        cout << "Imaginary number : " << this->image  << "\n";
    }
    ~Complex(){}
};

int main(){
    // your code goes here
    Complex i1(10,20);
    Complex i2(20,30);
    Complex i3 = i1+i2;
    i3.Show();
    return 0;
}