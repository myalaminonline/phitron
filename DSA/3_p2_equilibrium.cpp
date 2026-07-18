#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int sum = 0;
    for(int x : v){
        sum += x;
    }

    int left_sum = 0;
    for(int i=0; i<n; i++){
        sum -= v[i];
        if(left_sum == sum){
            cout << i << endl;
            break;
        }
        left_sum += v[i];
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem 2: Equilibrium Index 
// Description: Given an array of integers, find the equilibrium index. An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
// Example:
// Input
// Output
// 7
// -7 1 5 2 -4 3 0
// 3


// Explanation: At index 3, the sum of elements before it is -1 and after it is also -1

// -7
// 1
// 5
// 2
// -4
// 3
// 0

//  	0	   1		2		3		4		5		6
// Sum of before index 3  = -7 + 1 + 5 = -1
// Sum of after index    3	  = -4 + 3 + 0 = -1
