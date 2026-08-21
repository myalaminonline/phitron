#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    while(q--){
        int l,r; cin>>l>>r;
        l--; r--;

        vector<int> v;
        for(int i=l; i<=r; i++){
            v.push_back(a[i]);
        }            
        
        sort(v.begin(), v.end());
        int mex = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] != mex){
                cout<<mex<<endl;
                break;
            }
            mex++;
        }
        if(mex == v.size()){
            cout<<mex<<endl;
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-cp-track-selection-contest-b9-1/challenges/range-mex/problem?isFullScreen=true
/*
Problem Statement
You are given an array  of length . Then you will be given  queries. In each query, you need to find the MEX of the subarray starting from index  to index  (inclusive).

Subarray: A contiguous sequence of elements from the original array, defined by the starting index  and the ending index .

MEX (Minimum EXcluded value): The smallest non-negative integer that is not present in the specified subarray.

Example: If the array is  and the query is for the subarray from  to  (assuming 1-based indexing), the subarray is . Here -

The integers present are 0 and 2
The smallest missing non-negative integer is 1. Therefore, the MEX is 1
Note: The input file is too large. Must use fast I/O and don't use endl. Use "\n" instead of endl.

Fast I/O: Add these 2 lines at the first of main function -

ios::sync_with_stdio(false);
cin.tie(nullptr);
Input Format

First line of each test case contains the value  and  — the number of elements and the number of queries.
Second line of each test case contains the array .
The next  lines will contain the query value  and .
Constraints

Output Format

Find the MEX of the subarray from index  to .

Sample Input 0

8 3
0 1 1 2 1 0 0 2
5 6
7 8
4 4
Sample Output 0

2
1
0
*/