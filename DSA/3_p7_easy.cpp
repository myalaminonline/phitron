#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        bool flag = false;

        for(char c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count = 0;
            }else{
                count++;
            }

            if(count >= 4){
                flag = true;
                break;
            }
        }

        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Easy Speaking
// Chef believes that a word is hard to pronounce if it contains a sequence of at least 
// 4
// 4 contiguous characters that are all consonants.
// Here, a consonant is every letter from a to z, except for the five letters {a, e, i, o, u}.

// For example, the words 
// "syzygy"
// ,
// "locksmith"
// ,
// "syzygy","locksmith", and 
// "worldview"
// "worldview" are hard to pronounce, because:

// "syzygy"
// "syzygy" has length 
// 6
// 6 and is made up of entirely consonants.
// "locksmith"
// "locksmith" has the contiguous sequence 
// "cksm"
// "cksm" within it, which is all consonants.
// "worldview"
// "worldview" has the contiguous sequence 
// "rldv"
// "rldv" within it, which is all consonants.
// On the other hand, the words 
// "cry"
// ,
// "scream"
// ,
// "cry","scream", and 
// "aqueous"
// "aqueous" are not hard to pronounce.

// You are given a word in the form of a string 
// S
// S containing 
// N
// N English letters.
// Is this word hard to pronounce?

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer 
// N
// N, the length of the word.
// The second line contains the string 
// S
// S of length 
// N
// N.
// Output Format
// For each test case, output on a new line the answer: Yes if the word is hard to pronounce, and No otherwise.

// Each letter of the output may be printed in either uppercase or lowercase, i.e. the strings NO, No, nO, and no will all be considered equivalent.

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
// ≤
// 100
// 1≤N≤100
// S
// S has length 
// N
// N.
// Each character of 
// S
// S is one of 
// {
// a
// ,
// b
// ,
// c
// ,
// …
// ,
// z
// }
// {a,b,c,…,z}.
// Sample 1:
// Input
// Output
// 6
// 6
// syzygy
// 3
// cry
// 9
// locksmith
// 6
// scream
// 7
// aqueous
// 9
// worldview
// Yes
// No
// Yes
// No
// No
// Yes
// Explanation:
// Test case 
// 1
// 1: As explained in the statement, 
// syzygy
// syzygy contains 
// 6
// 6 consonants in a row, and so is hard to pronounce. The answer is Yes.

// Test case 
// 2
// 2: The word 
// cry
// cry has length 
// 3
// 3, and so certainly does not contain 
// 4
// 4 consonants in a row (even though it contains only consonants). Thus, it is not hard to pronounce, and the answer is No.

// Test case 
// 3
// 3: The word 
// locksmith
// locksmith contains 
// 4
// 4 consonants in a row, namely 
// cksm
// cksm, and so is hard to pronounce. The answer is Yes.