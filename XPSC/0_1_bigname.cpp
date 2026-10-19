#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int count = 0;
    while(ss >> word) {
        if( word == "phitron" || word == "PHITRON" || word == "Phitron" ) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
    
// +------------------+
// | alaminonline.com |
// +------------------+
// Rahim is a college student who dreams of becoming a software engineer one day. One afternoon, his friend excitedly told him about a place called Phitron. Rahim had never heard the name before — but from that moment, he could not stop hearing it.

// His friend kept repeating it. The seniors in the cafeteria were talking about it. Even the guy next to him on the bus was on the phone saying — "Phitron, I am telling you, Phitron!"

// Rahim pulled out his notebook and wrote down everything people said that day. Now he wants to know — how many times did the word "Phitron" actually come up?

// Help Rahim count how many times the word "Phitron" appears in what he wrote.

// The search is case-insensitive — so "phitron", "PHITRON", and "Phitron" all count.

// You only need to count exact whole word matches — "Phitron" hidden inside a longer word does not count.

// Input Format

// A single line containing a string S — what Rahim wrote in his notebook.
// Constraints

// 1 ≤ length of S ≤ 1000
// S contains only lowercase and uppercase English letters and spaces.
// Output Format

// Print a single integer — the number of times the word "Phitron" appears in S.

// Sample Input 0

// Phitron is awsome and I heard phitron is launching a new course
// Sample Output 0

// 2
// Explanation 0

// "Phitron" appears at position 1 and "phitron" appears at position 7. Since the match is case-insensitive, both are counted. Answer is 2.

// Sample Input 1

// I love PHITRON because phitron teaches well and Phitron never gives up
// Sample Output 1

// 3
// Explanation 1

// "PHITRON", "phitron", and "Phitron" — all three are valid matches. Answer is 3.