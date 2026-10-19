#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    // // sum of n series: formula 1
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum+=i;
    // }
    // cout << sum;

    // sum of n series: formula 2
    int sum = 0;
    sum = (n*(n+1))/2;
    cout << sum;
    
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
