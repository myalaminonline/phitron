#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < min(n, m); ++i) {
            if (a[i] == b[i]) {
                cout << a[i];
            }else{
                break;
            }
        }
        cout << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Early Certificates
// The Chefland tennis tournament has reached its final match. The two finalists' names are given by the two strings 
// A
// A and 
// B
// B, of lengths 
// N
// N and 
// M
// M respectively.
// It is guaranteed that 
// A
// A and 
// B
// B contain only lowercase English characters, and they also start with the same letter.

// The organizers want to engrave the winner's name on the trophy as soon as possible.
// However, since the match has not begun yet, they decide to do the best they possibly can: only engrave the part of the name that is guaranteed to be correct regardless of who wins.
// Thus, the organizers will engrave the longest string that appears at the beginning of both 
// A
// A and 
// B
// B onto the trophy.

// Given 
// A
// A and 
// B
// B, determine the string engraved on the trophy before the match starts.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of three lines of input.
// The first line of each test case contains two space-separated integers 
// N
// N and 
// M
// M — the lengths of the names of the finalists.
// The second line contains a string 
// A
// A of length 
// N
// N, denoting the name of the first finalist.
// The third line contains a string 
// B
// B of length 
// M
// M, denoting the name of the second finalist.
// Output Format
// For each test case, output on a new line the answer: the string engraved on the trophy before the final begins.

// Constraints
// 1
// ≤
// T
// ≤
// 100
// 1≤T≤100
// 1
// ≤
// N
// ,
// M
// ≤
// 100
// 1≤N,M≤100
// A
// A has length 
// N
// N and 
// B
// B has length 
// M
// M.
// The first characters of 
// A
// A and 
// B
// B are equal.
// A
// A and 
// B
// B contain only lowercase English letters, i.e. characters from the set 
// {
// a
// ,
// b
// ,
// …
// ,
// z
// }
// {a,b,…,z}.
// This corresponds to ASCII values 
// 97
// −
// 122
// 97−122.
// Sample 1:
// Input
// Output
// 4
// 5 6
// alice
// alonso
// 7 4
// chefina
// chef
// 16 13
// matteoberrettini
// matteoarnaldi
// 6 5
// flavio
// felix
// al
// chef
// matteo
// f
// Explanation:
// Test case 
// 1
// 1: The players are 
// alice
// alice and 
// alonso
// alonso.
// The longest common starting string of their names is the first two characters, i.e. 
// al
// al. So, this is the answer.

// Test case 
// 2
// 2: The players are 
// chefina
// chefina and 
// chef
// chef.
// The longest common starting string of their names is the first four characters, i.e. 
// chef
// chef. So, this is the answer. Note that this is also the entire name of the second player; which is fine.