#include<bits/stdc++.h>
using namespace std;

class Student{ 
    public:
        char name[100];
        int roll;
        double cgpa;
};

int main(){

    // class and object    
    // Student s;
    // char temp[100] = "Babaiya";
    // strcpy(s.name, temp);
    // s.roll = 1;
    // s.cgpa = 3.5;
    // cout << s.name << " " << s.roll << " " << s.cgpa << endl;

    // class and object with input and output
    Student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
