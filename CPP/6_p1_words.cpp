#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for(char c : s){
        char my_c = tolower(c);
        if(my_c == 'e') e++;
        else if(my_c == 'g') g++;
        else if(my_c == 'y') y++;
        else if(my_c == 'p') p++;
        else if(my_c == 't') t++;
    }

    int ans = min({e, g, y, p, t});
    cout << ans << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// U. New Words
// time limit per test1 second
// memory limit per test256 megabytes
// Given a string S
// . Print number of times that "EGYPT" word can be formed from S
// 's characters.

// Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

// Input
// Only one line contains a string S(1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters.

// Output
// Print the answer required above.

// Examples
// InputCopy
// EgYpTaz
// OutputCopy
// 1
// InputCopy
// pemigdbeigyypetet
// OutputCopy
// 2