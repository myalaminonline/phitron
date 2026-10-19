#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    while(q--){
        int l, r;
        cin >> l >> r;

        int count = 0;
        for(int i=l-1; i<r; i++){
            if(i > 0 && i < n-1){
                if(a[i] < a[i-1] && a[i] < a[i+1]){
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
    
// +------------------+
// | alaminonline.com |
// +------------------+
// The city authority monitors daily activity levels to understand how busy the city is over time. Each day’s activity level is recorded as an integer, where higher values indicate more activity and lower values indicate calmer days.

// The authority is particularly interested in identifying silent days — days when the city was unusually quiet compared to the surrounding days.

// You are given an integer N and an array A of size N (1-indexed), where A[i] represents the activity level on day i.

// A day i is called a silent day if:

// Its activity level is strictly smaller than both of its adjacent days.

// Note that the first and last days can never be silent.

// You are also given Q queries. Each query contains two integers L and R. For each query, determine how many silent days lie completely inside the range between L and R inclusive (1-indexed) .

// Input Format

// The first line contains an integer N — the number of days
// The second line contains N space-separated integers A1, A2, ..., AN
// The third line contains an integer Q — the number of queries
// The next Q lines each contain two integers L and R
// Constraints

// 3 ≤ 𝑁 ≤ 10^5
// 1 ≤ 𝑄 ≤ 10^5
// 1 ≤ 𝐴[𝑖] ≤ 10^9
// 1 ≤ L < R ≤ N
// Output Format

// For each query, print a single integer — the number of silent days in the range between L and R inclusive, each on a new line.

// Sample Input 0

// 8
// 5 3 6 2 4 1 7 3
// 3
// 1 8
// 2 5
// 4 7
// Sample Output 0

// 3
// 2
// 2
// Explanation 0

// Silent days in the array are at indices 2, 4, and 6 (1-indexed) [each is smaller than both neighbors].

// Query 1 to 8, includes all → 3 silent days

// Query 2 to 5, includes indices 2 and 4 → 2 silent days

// Query 4 to 7 includes indices 4 and 6 → 2 silent days

// Sample Input 1

// 5
// 1 2 3 4 5
// 2
// 1 5
// 2 4
// Sample Output 1

// 0
// 0