#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,k; cin>>n>> k;
    string s; cin>>s;

    string small_string = s;
    for(int i=0; i<=s.length()-k; i++){
        string current_string = s;
        string sub_string = current_string.substr(i, k);
        sort(sub_string.begin(), sub_string.end());
        current_string.replace(i, k, sub_string);
        if(current_string < small_string) small_string = current_string;
    }
    cout<<small_string<<endl;

    return 0;
}
// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-cp-track-selection-contest-b9-1/challenges/love-of-string/problem?isFullScreen=true
/*
Bablu gave Mira a string  of  lowercase letters. Mira loves lexicographically smallest strings, so she wants to make  as small as possible by rearranging it.

But Bablu puts one condition: Mira can only pick  letters that are next to each other, and sort just those letters (smallest to largest). She can do this only once. The rest of the string must stay the same.

Help Mira find the smallest string she can make.

Input Format

The first line contains two space-separated integers n and k. The second line contains the string s of length n.

Constraints

1 ≤ k ≤ n ≤ 2000
s contains only lowercase English letters
Output Format

The lexicographically smallest string possible.

Sample Input 0

6 3
fdcbae
Sample Output 0

cdfbae
Explanation 0

Here n = 6 and k = 3, so there are 4 possible windows of length 3:

fdc → cdf, giving cdfbae
dcb → bcd, giving fbcdae
cba → abc, giving fdabce
bae → abe, giving fdcabe
Comparing all four results, cdfbae is the smallest since it starts with c, which is smaller than the first letter of every other option.
*/