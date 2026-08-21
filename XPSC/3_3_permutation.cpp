#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k; cin>>n>>k;
    vector<bool> present(n+1, false);
    
    int valid=0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x>=1 && x<=n && !present[x]){
                present[x] = true;
                valid++;
        }
    }

    if (n-valid <= k) cout << "YES\n";
    else cout << "NO\n";
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) solve();

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-xpsc-recommendation-contest/challenges/can-you-make-a-permutation/problem?isFullScreen=true
/*
Problem Statement

A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [2,1,2] is not a permutation (2 appears twice in the array), and [3,1,4] is also not a permutation (n=3 but there is 4 in the array).

You are given an array A of positive integers of length n and a value k.You need to make this array a permutation of length n. For this, you can perform the below operation at most k times -

You can change any value A(i) (where 1<= i <= n ) to any other positvie integer.
If you can make a permutation of length n print YES otherwise print NO.

Note: The input file is too large. Must use fast I/O and don't use endl. Use "\n" instead of endl.

Fast I/O: Add these 2 lines at the first of main function -

ios::sync_with_stdio(false);
cin.tie(nullptr);
Input Format

First line will contain T, the number of test cases.
First line of each test case will contain n and k.
Second line of each test case will contain the array a.
Constraints
1 <= T <= 10^3
1 <= n <= 10^4
1 <= k <= 10^4
1 <= A(i) <= 10^4

Output Format

If you can make a permutation of length n print YES otherwise print NO.Don't forget to print a new line after each test case.

Sample Input 0

4
7 5
2 3 1 5 6 7 4
4 2
9 3 6 2
5 1
2 2 1 7 9
1 1
3
Sample Output 0

YES
YES
NO
YES
Explanation 0

In the second test case, k = 2 and we can change A[1] = 1 and A[3] = 4 . Then the array will be [1,3,4,2] which is a permutation of length n.
*/