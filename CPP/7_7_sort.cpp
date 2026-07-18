#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

// bool cmp(Student l, Student r){
//     if(l.marks < r.marks){
//         return true;
//     }else{
//         return false;
//     }
// }

bool cmp(Student a, Student b){
    // return a.marks < b.marks;
    // // sort by marks in ascending order

    // return a.marks > b.marks;
    // // sort by marks in descending order

    // return a.name < b.name;
    // // sort by name in ascending order

    // return a.name > b.name;
    // // sort by name in descending order

    // return a.roll < b.roll;
    // // sort by roll in ascending order

    return a.roll > b.roll;
    // // sort by roll in descending order
}

int main(){
    
    // input n
    int n;
    cin >> n;

    // input array
    Student s[n];
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
    }

    // sort array
    sort(s, s+n, cmp);

    // print array
    for(int i=0; i<n; i++){
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
