#include<bits/stdc++.h>
using namespace std;

class Student{ 
    public:
        int cls;
        int roll;
        double cgpa;

    // Student(int cls, int roll, double cgpa){
    //     this->cls = cls;
    //     this->roll = roll;
    //     this->cgpa = cgpa;
    // }

    Student(int cls, int roll, double cgpa){
        (*this).cls = cls;
        (*this).roll = roll;
        (*this).cgpa = cgpa;
    }
};

Student fun(){
    Student karim(11, 2, 4.0);
    return karim;
}

int main(){
    
    Student rahim(10, 1, 3.5);
    Student obj = fun();

    cout << rahim.cls << " " << rahim.roll << " " << rahim.cgpa << endl;
    cout << obj.cls << " " << obj.roll << " " << obj.cgpa << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
