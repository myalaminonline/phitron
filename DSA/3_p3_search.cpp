#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while(q--){
        int target;
        cin >> target;

        int l=0, r=n-1;
        int flag = 0;

        while(l <= r){
            int mid = (l+r)/2;

            if(target == v[mid]){
                flag = 1;
                break;
            }else{
                if(target > v[mid]){
                    l = mid+1;
                }else{
                    r = mid-1;
                }
            } 
        }

        if(flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem-3: Search Query

// WAP that takes an array of size n and q queries as input. For each query you will be given a number. For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’. Solve this problem in an optimized way.

// Sample input
// Sample output
// 5
// 6 3 2 1 8

// 4

// 1
// 5
// 2
// 9
// YES
// NO
// YES
// NO


// Explanation: You are given an array of size 5 and 4 queries. In the first query you are given 1. 1 is present in the array so we print ‘YES’. In the second query 5 is not present in the array so we print ‘NO’. Third and Fourth query are similar.
