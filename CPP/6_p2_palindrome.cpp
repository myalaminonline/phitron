#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin >> s;

    string r = s;
    reverse(r.begin(), r.end());

    if(s == r){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// I. Palindrome
// time limit per test1 second
// memory limit per test256 megabytes
// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// InputCopy
// abba
// OutputCopy
// YES
// InputCopy
// icpcassiut
// OutputCopy
// NO
// InputCopy
// mam
// OutputCopy
// YES