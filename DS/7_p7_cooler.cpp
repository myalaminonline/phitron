#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        long long total_minutes = 0;
        for (int i = n; i > m; i--) {
            total_minutes += i;
        }
        cout << total_minutes << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Cooler
// Summer season has come, and now the temperatures are soaring. Hence, Chef has bought an air conditioner to help him cool off.

// When turned on, the air conditioner takes exactly 
// X
// X minutes to make the temperature drop 
// X
// X degrees Celsius to 
// X
// −
// 1
// X−1 degrees. (It does not work below 
// 0
// 0 degrees). For example, it takes 
// 10
// 10 minutes to go from 
// 10
// 10 degrees to 
// 9
// 9.

// Currently, the temperature is 
// N
// N degrees Celsius, and Chef wants a temperature of 
// M
// M degrees. It is guaranteed that 
// 0
// ≤
// M
// <
// N
// 0≤M<N. How long (in minutes) should the air conditioner be turned on to achieve the temperature?

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// The first and only line of each test case contains 
// 2
// 2 integers - 
// N
// N and 
// M
// M.
// Output Format
// For each test case, output on a new line the number of minutes the air conditioner takes to go from 
// N
// N degrees to 
// M
// M degrees Celsius.

// Constraints
// 1
// ≤
// T
// ≤
// 100
// 1≤T≤100
// 0
// ≤
// M
// <
// N
// ≤
// 40
// 0≤M<N≤40
// Sample 1:
// Input
// Output
// 3
// 10 9
// 40 38
// 40 0
// 10
// 79
// 820
// Explanation:
// Test Case 1 : It takes 
// 10
// 10 minutes to drop the temperature from 
// 10
// 10 to 
// 9
// 9.

// Test Case 2 : It takes 
// 40
// 40 minutes to go from 
// 40
// 40 to 
// 39
// 39, and then another 
// 39
// 39 minutes to go from 
// 39
// 39 to 
// 38
// 38.

