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
    return a.marks < b.marks;
    // sort ascending
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
