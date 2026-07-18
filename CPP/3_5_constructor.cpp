#include<bits/stdc++.h>
using namespace std;

class Student{ 
    public:
        int cls;
        int roll;
        double cgpa;

    Student(int c, int r, double g){
        cls = c;
        roll = r;
        cgpa = g;
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
