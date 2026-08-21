#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> v;
    for(int i=0; i<n; i++){
        if(a[i] <= n) v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    vector<bool> has(n + 1, false);
    for(int i=0; i<v.size(); i++){
        has[v[i]] = true;
    }

    for(int i=0; i<=n; i++){
        if(!has[i]){
            cout<<i<<endl;
            break;
        }
    } 
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-cp-track-selection-contest-b9-1/challenges/mex-equals-sum/problem?isFullScreen=true
/*
Time Limit: 2s, Memory Limit: 512MB

Problem Statement
You are given an array A of length N consisting of non-negative integers.

You may choose two subsequences S1 and S2 from the array such that:

Each element of the array can be used in at most one of the two subsequences.

It is allowed to leave some elements unused.

The order of elements inside a subsequence does not matter.

For an integer x, we say that x is good if there exist such subsequences S1 and S2 satisfying:

MEX(S1) = x

sum(S2) = x

Let B be an array consisting of all good values x.

Your task is to compute the mex of the array B.

Definitions

A subsequence is obtained by deleting zero or more elements from the array without changing the order of the remaining elements.
The mex (minimum excluded value) of a set of non-negative integers is the smallest non-negative integer that does not belong to the set.
The sum of a subsequence is the sum of its elements.
Input Format

The first line contains a single integer N

The second line contains N integers A1, A2, ..., AN

Constraints

1 ≤ N ≤ 2000

0 ≤ Ai ≤ 109 for all 1 ≤ i ≤ N

Output Format

Print a single integer — the value MEX(B).

Sample Input 0

4
1 0 2 1
Sample Output 0

3
*/