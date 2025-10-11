#include <bits/stdc++.h>
using namespace std;
void TryCatch(){
    int a, b; cin >> a >> b;
    //try
    try{
        if(b==0){ //throw
            throw "Division by Zero is not allowed";
        }
        cout << "A divied by B -> " << a/b << endl;
    }
    //catch
    catch(const char* msg){
        cout << msg << endl;
    }
}
// This is a good example for try and catch
class Printer{
private:
    int no_of_pages;
public:
    Printer(int val){
        this->no_of_pages = val;
    }
    void print(string s){
        int n = s.size();
        int req_pages = ceil(n/10.0); // taking 10 char per page as limit
        try{
            if(req_pages > no_of_pages){ // i don't have enough pages to print the text so it'll throw an error
                throw "Not enough papers please refill\n";
            }
            no_of_pages -= req_pages; 
            cout << s << endl;
        }catch(const char* e){
            cout << "Error : " << e << endl;
        } 
    }
};
int main(){
    // to handle error at run time we use error handling
    TryCatch();

    Printer p1(2); // printer with 2 pages

    p1.print("Hi this is the printable text that this is going to print");

    
    return 0;
}