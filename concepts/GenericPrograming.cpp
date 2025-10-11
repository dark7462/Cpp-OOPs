#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
T add(T a, T b){
    return a + b;
}
int main(){
    // your code goes here
    // when you make a funtion of one datatype it'll not work for multiple type
    // for example making a calculator you pass int and float and it'll
    cout << add(10,30) << endl; // works for int 

    cout << add(1.32,52.22) << endl; // works for float
    // both in one function
    
    return 0;
}