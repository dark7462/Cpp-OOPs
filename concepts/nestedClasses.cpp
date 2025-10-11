#include <bits/stdc++.h>
using namespace std;
#define ll long long

class thub{
public:
    static int no_batchs;
    //owl coders
    thub(){
        no_batchs++;
    }
    static void batch_info(){
        cout << "Currently Thub have " << no_batchs << " Batchs" << endl;
    }
    class owl_coder{
    public:
        int class_strenth;
        string teacher;
        owl_coder(string teacher,int class_strength){
            this->teacher = teacher;
            this->class_strenth = class_strength;
        }
        void info(){
            cout << "Mentor of the Batch : " << teacher << endl;
            cout << "Strength of the Batch : " << class_strenth << endl;
        }
    };
    //drive ready
    class driver_ready{
    public:
        int class_strenth;
        string teacher;
        driver_ready(string teacher,int class_strength){
            this->teacher = teacher;
            this->class_strenth = class_strength;
        }
        void info(){
            cout << "Mentor of the Batch : " << teacher << endl;
            cout << "Strength of the Batch : " << class_strenth << endl;
        }
    };
    //ignite coder
    class ignite_coder{
    public:
        int class_strenth;
        string teacher;
        ignite_coder(string teacher,int class_strength){
            this->teacher = teacher;
            this->class_strenth = class_strength;
        }
        void info(){
            cout << "Mentor of the Batch : " << teacher << endl;
            cout << "Strength of the Batch : " << class_strenth << endl;
        }
    };
};
int thub::no_batchs = 0;

int main(){
    // your code goes here
    thub::owl_coder seven("Ashok sir",102);
    thub::driver_ready six("Pawan sir",98);
    thub::ignite_coder one("Srinu sir",56);
    
    seven.info();
    six.info();
    one.info();

    thub::batch_info();
    return 0;
}