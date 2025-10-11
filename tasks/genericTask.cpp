#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
void bubbleSort(vector<T> &arr){ // this function will take any type of data (int, string, float, char)
    for(int i = 0 ; i < arr.size(); i++){ // and then sort it using bubble sort
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
template <typename T>
void ptr(vector<T> &arr){ // a function to print any kind of vector 
    for(T i : arr) cout << i << " "; // (cpp suck at this we should get a in built function)
    cout << "\n";
}
int main(){
    // your code goes here
    vector <string> name = {"anurag", "piysh","renuka","anupam","harsh"};
    vector <int> nums = {4,3,5,2,16,8,3,7,2};
    bubbleSort(name); ptr(name);
    bubbleSort(nums); ptr(nums);
    return 0;
}