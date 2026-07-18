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


int main(){
    
    Student rahim(10, 1, 3.5);
    Student karim(11, 2, 3.0);

    cout << rahim.cls << " " << rahim.roll << " " << rahim.cgpa << endl;
    cout << karim.cls << " " << karim.roll << " " << karim.cgpa << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
