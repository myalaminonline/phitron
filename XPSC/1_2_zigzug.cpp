#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int first = 1, second = n; // series
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){ // odd position
            cout << first << " ";
            first++;
        } else { // even position
            cout << second << " ";
            second--;
        }
    }
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// You are given an integer N. Your task is to construct a permutation of numbers from 1 to N.

// Construction Rule: Build the permutation following this rule:

// At odd positions (1st, 3rd, 5th, …), place the smallest available number
// At even positions (2nd, 4th, 6th, …), place the largest available number
// Positions are 1-based indexed. It can be shown that this rule always produces a unique permutation.

// Permutation:

// A permutation is a sequence of integers from 1 to n of length n containing each number exactly once. For example, (1), (4, 3, 5, 1, 2), (3, 2, 1) are permutations, and (1, 1), (4, 3, 1), (2, 3, 4) are not.

// Input Format

// A single integer N.

// Constraints

// (1 ≤ N ≤ 10^5)

// Output Format

// Print N space separated integers — the required permutation.

// Sample Input 0

// 2
// Sample Output 0

// 1 2
// Explanation 0

// For N = 2:

// Position 1 (odd) → smallest = 1
// Position 2 (even) → largest = 2
// Sample Input 1

// 5
// Sample Output 1

// 1 5 2 4 3
// Explanation 1

// For N=5:

// Position 1 (odd) → smallest = 1
// Position 2 (even) → largest = 5
// Position 3 (odd) → smallest = 2
// Position 4 (even) → largest = 4
// Position 5 (odd) → smallest = 3
// So the permutation is: 1 5 2 4 3