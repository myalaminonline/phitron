#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // array of 5 integers
    int a[5]={1,2,3,4,5};

    // print the address in hexadecimal
    for(int i=0; i<5; i++){
        cout  << &a[i] << endl;
    }
    cout << endl;

    // vector of 5 integers
    vector<int> v={1,2,3,4,5};

    // print the address in hexadecimal
    for(int i=0; i<5; i++){
        cout  << &v[i] << endl;
    }
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
