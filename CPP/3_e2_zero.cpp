#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            cout << a[i] << " ";
        } else {
            count++;
        }
    }

    for(int i=0; i<count; i++){
        cout << 0 << " ";
    }
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// N. Shift Zeros
// time limit per test1 second
// memory limit per test256 megabytes
// Given an array A
//  of size N
// . Print the array elements after shifting all zeroes in array A
//  to the right.

// Note: Solve this problem using function.

// Input
// First line will contain a number N
//  (1≤N≤103)
//  number of elements.

// Second line will contain N
//  numbers (0≤Ai≤103)
// .

// Output
// Print the array after shifting right all its zeros.

// Examples
// InputCopy
// 4
// 2 0 0 5
// OutputCopy
// 2 5 0 0 
// InputCopy
// 5
// 1 5 0 7 4
// OutputCopy
// 1 5 7 4 0