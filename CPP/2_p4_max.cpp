#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // int mx = INT_MIN; // with INT_MIN value
    int mx = a[0]; // with first value
    for(int i=0; i<n; i++){
        mx = max(mx, a[i]);
    }
    cout << mx << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// E. Max
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

// Example
// InputCopy
// 5
// 1 8 5 7 5
// OutputCopy
// 8