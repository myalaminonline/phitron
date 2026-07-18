#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int min_idx = 0, max_idx = 0;
    for(int i=1; i<n; i++){
        if(a[i] < a[min_idx]){
            min_idx = i;
        }
        if(a[i] > a[max_idx]){
            max_idx = i;
        }
    }

    swap(a[min_idx], a[max_idx]);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// M. Replace MinMax
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.

// Example
// InputCopy
// 5
// 4 1 3 10 8
// OutputCopy
// 4 10 3 1 8