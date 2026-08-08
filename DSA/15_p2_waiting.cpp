#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // testcase
    int t; cin >> t;
    while(t--){

        // input
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        // process
        int prefixMax[n];
        prefixMax[0] = a[0];
        for(int i=1; i<n; i++){
            prefixMax[i] = max(prefixMax[i-1], a[i]);
        }
        long long ans=0;
        for(int i=0; i<n; i++){
            ans += prefixMax[i] - a[i];
        }

        // output
        cout << ans << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.codechef.com/problems/WAIT1
// https://www.codechef.com/viewsolution/1332513791