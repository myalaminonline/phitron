#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){
    cout << "Inside function *p : " << *p << endl;
    cout << "Inside function &p :" << &p << endl;
}

int main(){
    
    int n = 200;
    int* p = &n;
    
    cout << "Before function *p : " << *p << endl;
    cout << "Before function &p :" << &p << endl;
    fun(p);
    cout << "After function *p : " << *p << endl;
    cout << "After function &p :" << &p << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
