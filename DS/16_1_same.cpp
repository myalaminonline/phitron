#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n, m;
    cin >> n >> m;
    stack<int> s;
    queue<int> q;
    for(int i=0; i<n; i++){
        int val; cin >> val;
        s.push(val);
    }
    for(int i=0; i<m; i++){
        int val; cin >> val;
        q.push(val);
    }

    // process
    bool flag = true;
    if (n != m) flag = false;
    else{
        while(!s.empty() && !q.empty()){
            if(s.top() != q.front()){
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }

    // output
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-09/challenges/same-or-not-ii/problem?isFullScreen=true
/*
Problem Statement

There is a list of N values that were inserted into a stack and a list of M values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using STL Stack and Queue only.

Input Format

First line will contain N and M.
Second line will contain stack A with N values.
Third line will contain queue B with M values.
Constraints
1. 1 <= N,M <= 10^6
2. 0 <= Values <= 1000

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/