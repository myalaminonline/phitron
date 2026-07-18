#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);
    int median = b[n / 2];

    int median_idx = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == median){
            median_idx = i;
            break;
        }
    }

    int target_idx = n / 2;
    cout << abs(median_idx - target_idx) << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Anika has a row of N lockers, each with a distinct number on it. She wants the median value to be placed at the middle locker.

// She can swap any two adjacent lockers in one move.

// Given the array, find the minimum number of adjacent swaps needed to bring the median element to the exact middle position.

// N is always odd in this problem, so there is always one exact middle.

// What is Median?
// The median is the middle value of a sorted list. Sort the array first, then the element sitting exactly in the center is the median.

// For example:

// Array → 3 1 4 2 5

// Sorted → 1 2 3 4 5
// Middle element → 3 (2 elements on the left, 2 on the right)

// Input Format

// First line contains N.
// Second line contains N space-separated integers.
// Constraints

// 1 ≤ N ≤ 10^3
// 1 ≤ A[i] ≤ 10⁹
// N is always odd
// Output Format

// Print the minimum number of adjacent swaps.

// Sample Input 0

// 5
// 5 3 1 4 2
// Sample Output 0

// 1
// Sample Input 1

// 5
// 1 2 3 4 5
// Sample Output 1

// 0