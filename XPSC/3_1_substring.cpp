#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    string s; cin>>s;

    int count = 0;
    for (int i=0; i<n-2; i++) {
        string sub = s.substr(i, 3);
        if (sub == "010" || sub == "101") count++;
    }

    cout<<count<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-xpsc-recommendation-contest/challenges/beautiful-pairs-4/problem?isFullScreen=true
/*
Problem Statement

You love binary number  and . Now,You are given a binary string  of size . Now you need to tell total how many beautiful substring are exist in the given string.

A Beautiful substring is a string that consist of  or 
Note - A binary string is a string which contains only  and .

Input Format

The first line contains a positive integer .
The second line contains a string , consisting only 0 and 1.
Constraints

 contains 0 or 1 ; Where .
Output Format

Print the count of beautiful substring.
Sample Input 0

5
11010
Sample Output 0

2
Explanation 0

In the given test case, the character of position s[2],s[3] & s[4] will give the substring = 101 which is a beautiful substring. and the character of position s[3],s[4] & s[5] will give the substring = 010 which is also a beautiful substring.

Sample Input 1

2
11
Sample Output 1

0
*/