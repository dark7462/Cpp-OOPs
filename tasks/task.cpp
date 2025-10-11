// 1. Declaring Objects
// Problem: Create a class Student with roll number and name. Declare two objects and display their values using a member function.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class student{
// public:
//     string name;
//     string roll_no;
//     student(string name,string roll_no){
//         this->name = name;
//         this->roll_no = roll_no;
//     }
//     void info(){
//         cout << "Name : " << name << endl;
//         cout << "Roll Number : " << roll_no << endl;
//     }
// };
// int main(){
//     // your code goes here
//     student anu("Anurag","24B11AI014");
//     anu.info();
//     student renu("Renuka","25B11AI299");
//     renu.info();
//     return 0;
// }


//===================================================

// 2. Access Specifiers and Their Scope
// Problem: Create a class Account with private balance, protected accountNumber, and public holderName. Show how to access each correctly.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class acc{
// private:
//     //setter and getters
//     int acc_bal;
// protected:
//     //setter and getters
//     int acc_no;
// public:
//     //direct access
//     string name;
//     acc(int acc_no, int acc_bal, string name){
//         this->acc_no = acc_no;
//         this->acc_bal = acc_bal;
//         this->name = name;
//     }

//     void set_bal(int new_bal){
//         this->acc_bal = new_bal;
//     }
//     int get_bal(){
//        return this->acc_bal; 
//     }
//     int get_no(){
//        return this->acc_no; 
//     }
//     void info(){
//         cout << "Name : " << this->name << endl;
//         cout << "Number : " << get_no() << endl;
//         cout << "Balance : " << get_bal() << endl;
//     }
// };
// int main(){
//     // your code goes here
//     acc anurag(1234,23000,"Aunurag");
//     anurag.info();
//     return 0;
// }

//==========================================================================

// 3. Defining Member Function
// Problem: Create a class Rectangle with length and breadth. Define member functions to calculate area and perimeter.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class rect{
// public:
//     double len;
//     double bre;
//     rect(double len, double bre){
//         this->len = len;
//         this->bre = bre;
//     }
//     double area(){
//         return len*bre;
//     }
//     double pre(){
//         return 2*(len+bre);
//     }
// };
// int main(){
//     // your code goes here
//     rect r1(10,20);
//     cout << "Perimeter : " << r1.pre() << endl;
//     cout << "Area : " << r1.area() << endl;

//     return 0;
// }

//=====================================================================

// 4. Rules for Inline Functions
// Problem: Create a class Calculator with inline functions for add, subtract, and multiply two integers.
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class calculator{
// public:
//     int a;
//     int b;
//     calculator(int a, int b){
//         this->a = a;
//         this->b = b;
//     }
//     inline int add() {return a+b;}
//     inline int sub() {return a-b;}
//     inline int mul() {return a*b;}
// };
// int main(){
//     // your code goes here
//     calculator c1(10,20);
//     cout << "Addition : " << c1.add() << endl;
//     cout << "Subtract : " << c1.sub() << endl;
//     cout << "Multiplication : " << c1.mul() << endl;
//     return 0;
// }

//===============================================================================

// 5. Static Member Variable
// Problem: Create a class Employee to count how many objects are created using a static variable.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class emp{
// public:
//     static int cnt;
//     string name;
//     int id;
//     emp(string name, int id){
//         this->name = name;
//         this->id = id;
//         cnt++;
//     }
// };
// int emp::cnt = 0;
// int main(){
//     // your code goes here
//     emp anu("Anurag",014);
//     emp piyush("Piyush",224);
//     cout << emp::cnt << endl;
//     return 0;
// }

//===================================================================================

// 6. Static Member Function
// Problem: Create a class App with a static function getVersion() and a static variable version to return current app version.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class app{
// public:
//     static string version;
//     string release;
//     app(string release){
//         this->release = release;
//         version = release;
//     }
//     static string getVersion() {
//         return version;
//     }
// };
// string app::version = "";
// int main(){
//     // your code goes here
//     app a1("v1.0.0");
//     cout << "Current App Version: " << app::getVersion() << endl;
//     app v1("V1.0.0.1");
//     cout << "Current App Version: " << app::getVersion() << endl;
//     return 0;
// }

//======================================================================================

// 7. Friend Functions
// Problem: Create two classes ClassA and ClassB and a friend function to access private members of both classes and return their sum.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class B; // Forward declaration

// class A{
//     int a;
// public:
//     A(int a){this->a = a;}
//     friend int sum(const A&, const B&);
// };
// class B{
//     int b;
// public:
//     B(int b){this->b = b;}
//     friend int sum(const A&, const B&);
// };
// int sum(const A& objA, const B& objB){
//     return objA.a + objB.b;
// }
// int main(){
//     // your code goes here
//     A objA(10);
//     B objB(20);
//     cout << "Sum: " << sum(objA, objB) << endl;
//     return 0;
// }

//==================================================================================

// 8. Overloading Member Function
// Problem: Create a class Print with overloaded display() function: one with no parameter, one with an int, and another with a string.

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// class print{
// public:
//     int a;
//     string s;
    
// };
// int main(){
//     // your code goes here
    
//     return 0;
// }

//==================================================================================

// 9. Array of Objects
// Problem: Create a class Book with title and price. Create an array of 5 books and print their details.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class stu{
public:
    string name;
    stu(string name){
        this->name = name;
    }
    
};
int main(){
    // your code goes here
    
    return 0;
}