#include<bits/stdc++.h>
using namespace std;

int *g;

void fun(){

    // static variable
    // int x = 20;
    // g = &x;
    // cout << "fun -> " << *g << endl;

    //dynamic variable
    int *x = new int;
    *x = 20;
    g = x;
    cout << "fun -> " << *g << endl;
}
    
int main(){

    int* p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;

    fun();
    cout<< "main -> " << *g << endl;
    
    return 0;
}
    
// +------------------+
// | alaminonline.com |
// +------------------+
