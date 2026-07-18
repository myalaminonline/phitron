#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int odd_sum = 0, even_sum = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 1) {
            odd_sum += (s[i] - '0');
        } else {
            even_sum += (s[i] - '0');
        }
    }

    int difference = abs(odd_sum - even_sum);
    if(difference % 11 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
    
// +------------------+
// | alaminonline.com |
// +------------------+
// Problem Statement

// You have given a number. Your task is to find if the number is divisible by 11 or not.

// There is a way you can find a number is divisible by 11 or not very easily:

// Suppose the number is 62524.

// For 62524 , if we go from right to left and we take Odd position digit sum = 4+5+6 = 15

// For 62524 , if we go from right to left and we take Even position digit sum = 2+2 = 4

// Now we find the absolute difference = Odd position digit sum - Even Position digit sum = 15 - 4 = 11

// If the absolute difference is divisible by 11 then, we can say that the number is divisibe by 11.

// If the absolute difference is not divisible by 11 then, we can say that the number is not divisibe by 11.

// Input Format

// You will be given a number as input.
// Constraints

// 1 <= number <= 10^100
// Output Format

// If number is divisible by 11 then print YES otherwise print NO
// Sample Input 0

// 62524
// Sample Output 0

// YES