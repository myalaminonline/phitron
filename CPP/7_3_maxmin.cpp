#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main(){
    
    int n;
    cin >> n;

    Student s[n];
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
    }

    for(int i=0; i<n; i++){
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    // int mn = INT_MAX;
    // for(int i=0; i<n; i++){
    //     // if(s[i].marks < mn){
    //     //     mn = s[i].marks;
    //     // }
    //     mn = min(mn, s[i].marks);
    // }
    // cout << endl << "Minimum marks = " << mn << endl;

    // Student mn = s[0];
    Student mn;
    mn.marks = INT_MAX;
    for(int i=0; i<n; i++){
        if(s[i].marks < mn.marks){
            mn = s[i];
        }
    }
    cout << endl << "Minimum marks = " << mn.marks << endl;
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    // Student mx = s[0];
    Student mx;
    mx.marks = INT_MIN;
    for(int i=0; i<n; i++){
        if(s[i].marks > mx.marks){
            mx = s[i];
        }
    }
    cout << endl << "Maximum marks = " << mx.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
