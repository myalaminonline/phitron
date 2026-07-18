#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void hello(){
        cout << "Hello from " << name << endl;
    }

    void total(){
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main(){
    
    Student alamin("Md. Al Amin", 1, 80, 90);
    //cout << alamin.name << " " << alamin.roll << endl;
    // alamin.hello();
    alamin.total();


    Student babaiya("Ahmad bin Al Amin", 10, 100, 100);
    //cout << babaiya.name << " " << babaiya.roll << endl;
    // babaiya.hello();
    babaiya.total();
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
