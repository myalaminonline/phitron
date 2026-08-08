#include<bits/stdc++.h>
using namespace std;

int main(){

    // testcase
    int t; cin>>t;
    while(t--){

        // input
        string s;
        cin >> s;

        // process
        stack<char> st;
        for(char c:s){
            if(c=='0'){
                if(!st.empty() && st.top()=='1'){
                    st.pop();
                } else st.push(c);
            } else if(c=='1'){
                if(!st.empty() && st.top()=='0'){
                    st.pop();
                } else st.push(c);
            }
        }

        // output
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-09/challenges/is-it-valid-1-1/problem?isFullScreen=true
/*
Problem Statement

Given a string S containing just the characters 0 and 1, determine if the input string is valid.

An input string is valid if the string is empty after doing some operatios. The available operations are:

0 can delete its previous available character 1 along with itself. If there is no 1 available to delete, it will not delete itself.
1 can delete its previous available character 0 along with itself. If there is no 0 available to delete, it will not delete itself.
Note: You need to solve it using STL Stack or Queue only.

Input Format

First line will contain T, the number of test cases.
Next T lines will contain the string S.
Constraints
1 <= T <= 1000
1 <= |S| <= 1000. Here |S| means the length of the string.
Output Format

Output YES if the string is valid, otherwise NO.
Sample Input 0

10
0011
1010
1100
0101
0001
0111
0110
100101
1110010
0001011011
Sample Output 0

YES
YES
YES
YES
NO
NO
YES
YES
NO
YES
*/