#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // system 1
    vector<int> sum(n);

    sum[0] = v[0];
    for(int i=1; i<n; i++){
        sum[i] = sum[i-1] + v[i];
    }

    for(int x : sum){
        cout << x << " ";
    }
    cout << endl;


    
    // system 2
    int running_sum = 0;

    for(int x : v){
        running_sum += x;
        cout << running_sum << " ";
    }
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem-1: Running Sum of an Array
// Description:
// Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]). Write a C++ program to compute the running sum of the given array and print the result.
// Note: Solve this problem using function and Vector. 
// Input
// The first line contains an integer n representing the size of the array.
// The second line contains n integers representing the elements of the array nums.
// Output
// Print the running sum of the array as a sequence of integers separated by spaces.
// Example:
// Input
// Output
// 4
// 1 2 3 4
// 1 3 6 10

// Explanation:
// Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
