#include<stdio.h>

int main(){
    
    // input n
    int n;
    scanf("%d", &n);

    // input array
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // find ans
    int ans = 0;

    // update ans
    for(int i = 0; i < n; i++){        
        int cur_val = a[i];

        if(cur_val == ans){
            // ans exist
            ans++;
        }
    }

    // print ans
    printf("%d\n", ans);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Hablu has a box with candies labeled 0, 1, 2, ... He gives Bablu a list of n candy labels (some labels may duplicate). It is guranteed that, the candies lables will be given in ascending order.

// Now, Bablu must pick one candy to eat that is not in the box. He wants to pick the smallest non-negative integer label possible (so he wastes as little as possible).

// What label should Bablu pick?

// Input Format

// First line: a single integer n — the number of candies in the box

// Second line: n space-separated integers Aᵢ — the candy labels

// Constraints

// 1 ≤ n ≤ 10⁵

// 0 ≤ Aᵢ ≤ 10⁹

// Output Format

// A single integer m — the smallest non-negative integer label not present in the box

// Sample Input 0

// 5
// 0 1 2 3 4
// Sample Output 0

// 5
// Explanation 0

// The smallest non-negative integer not present is - 5

// Sample Input 1

// 7
// 0 0 1 2 2 4 6
// Sample Output 1

// 3
// Explanation 1

// The missing non-negative integers are - 3, 5, 7, 8.... so on.

// From that the smallest one is - 3

// Language
// C
// More
// 1234567891011
// Line: 11 Col: 1

// Test against custom input