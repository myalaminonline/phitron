#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n == 1){
            cout << "NO" << endl;
            continue;
        }

        int flag = 0;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Batul is studying numbers. He notices that some numbers can be written as a product of two smaller positive integers, and some cannot.

// For example: 12 = 3 × 4, so it can be broken. But 7 cannot be written as a product of two smaller positive integers — the only way is 1 × 7, and 1 is not considered 'smaller' in a useful way.

// He calls numbers that cannot be broken "solid". She makes a list:

// 2 → solid, 3 → solid, 4 → not solid (2×2)

// 5 → solid, 6 → not solid (2×3), 7 → solid

// 8 → not solid, 9 → not solid (3×3), 10 → not solid

// Given N, print YES if N is solid, NO otherwise.

// Note: 1 is not considered solid.

// Input Format

// First line: T — test cases.
// Each test case: one integer N.
// Constraints

// 1 ≤ T ≤ 10000
// 1 ≤ N ≤ 10⁶
// Output Format

// YES or NO for each test case.
// Sample Input 0

// 10
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 12
// Sample Output 0

// YES
// YES
// NO
// YES
// NO
// YES
// NO
// NO
// NO
// NO