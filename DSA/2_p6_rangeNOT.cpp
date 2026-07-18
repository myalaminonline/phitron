#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<q; i++){
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for(int j=l-1; j<r; j++){
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Y. Range sum query
// time limit per test1.5 seconds
// memory limit per test256 megabytes
// Given 2 numbers N
//  and Q
// , an array A
//  of N
//  number and Q
//  number of pairs L
// , R
// . For each query Q
//  print a single line that contains the summation of all numbers from index L
//  to index R
// .

// Input
// First line contains two numbers N
// , Q
//  (1≤N,Q≤105)
//  where N
//  is number of elements in A
//  and Q
//  is number of query pairs.

// Second line contains N
//  numbers(1≤Ai≤109)
// .

// Next Q
//  lines contains L,R
//  (1≤L≤R≤N)
// .

// Output
// For each query Q
//  print a single line that contains the summation of all numbers from index L
//  to index R
// .

// Examples
// InputCopy
// 6 3
// 6 4 2 7 2 7
// 1 3
// 3 6
// 1 6
// OutputCopy
// 12
// 18
// 28
// InputCopy
// 4 3
// 5 5 2 3
// 1 3
// 2 3
// 1 4
// OutputCopy
// 12
// 7
// 15