#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input t
    int t;
    cin >> t;

    // if t found
    while(t--){

        // input s, x
        string s, x;
        cin >> s >> x;

        // find x
        int pos = s.find(x);

        // if x found
        while(pos != -1){

            // replace x with #
            s.replace(pos, x.size(), "#");
            
            // find x again
            pos = s.find(x, pos + 1);
        }

        // print s
        cout << s << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem Statement

// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

// Input Format

// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.
// Constraints

// 1 <= T <= 1000
// 1 <= |S|, |X| <= 1000
// |X| <= |S|
// Output Format

// For each test cases output the modified string S.
// Sample Input 0

// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
// Sample Output 0

// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer