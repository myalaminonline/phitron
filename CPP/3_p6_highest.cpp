#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char* n, int r, char s, int m, int c) {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main(){

    Student s1("Rahim", 1, 'A', 80, 10);
    Student s2("Karim", 2, 'B', 95, 10);
    Student s3("Alamin", 3, 'A', 90, 10);

    if (s1.math_marks >= s2.math_marks && s1.math_marks >= s3.math_marks) {
        cout << s1.name << endl;
    } else if (s2.math_marks >= s1.math_marks && s2.math_marks >= s3.math_marks) {
        cout << s2.name << endl;
    } else {
        cout << s3.name << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Question: Create three static objects with the help of the constructor of the following class.
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who got the highest math_marks and print his/her name.
