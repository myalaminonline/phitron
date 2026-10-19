#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int max_candies = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % x == 0) {
                if (a[i] > max_candies) {
                    max_candies = a[i];
                }
            }
        }
        cout << max_candies << endl;
    }
    
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// DIividing Candies
// Chef has gone to the candy store, to buy a jar of candies for his kids. There are 
// N
// N jars, the 
// i
// i-th jar having 
// A
// i
// A 
// i
// ​
//   candies.

// Chef has 
// X
// X children, and therefore he requires that whichever jar he chooses must have candies evenly divisible among all his 
// X
// X children, so that there is no fighting.

// Among all such jars, Chef will choose the largest jar (i.e. the one with the most candies). Find the number of candies in the jar Chef chose. In case Chef will not choose a jar at all, output 
// 0
// 0.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line contains 
// 2
// 2 integers 
// N
// N and 
// X
// X.
// The second line contains 
// N
// N integers - 
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  .
// Output Format
// For each test case, output on a new line the number of candies in the jar Chef chose, or 
// 0
// 0 if he chose none.

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
// 1
// ≤
// X
// ≤
// 5
// 1≤X≤5
// 1
// ≤
// A
// i
// ≤
// 100
// 1≤A 
// i
// ​
//  ≤100
// Sample 1:
// Input
// Output
// 4
// 4 1
// 2 3 5 7
// 4 3
// 2 3 5 7
// 4 3
// 3 9 11 6
// 4 4
// 3 9 11 6
// 7
// 3
// 9
// 0
// Explanation:
// Test Case 1: Chef can buy any jar since all are evenly divisible among 
// 1
// 1 child. Out of all the options, he chooses the largest jar with 
// 7
// 7 candies.

// Test Case 2 : Only the jar with 
// 3
// 3 candies is evenly divisible among Chef's 
// 3
// 3 children.