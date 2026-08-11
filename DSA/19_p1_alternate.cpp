#include <bits/stdc++.h>
using namespace std;

int main(){

    // testcase
    int t; cin >> t;
    while (t--){

        // input
        int n; cin>>n;
        int a[n+1];
        for (int i=1; i<=n; i++){
            cin>>a[i];
        }

        // process
        // odd even odd even ... (odd serial)
        int need_changes_for_odd_serial = 0;
        for(int i=1; i<=n; i++){
            // in odd position, if value is not odd
            if(i%2 == 1 and a[i]%2 != 1) need_changes_for_odd_serial++;
            // in even position, if value is not even
            if(i%2 == 0 and a[i]%2 != 0) need_changes_for_odd_serial++;
        }
        // even odd even odd ... (even serial)
        int need_changes_for_even_serial = 0;
        for(int i=1; i<=n; i++){
            // in odd position, if value is not even
            if(i%2 == 1 and a[i]%2 != 0) need_changes_for_even_serial++;
            // in even position, if value is not odd
            if(i%2 == 0 and a[i]%2 != 1) need_changes_for_even_serial++;
        }

        // output
        cout << min(need_changes_for_odd_serial, need_changes_for_even_serial) << endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.codechef.com/problems/ALTARR
// https://www.codechef.com/viewsolution/1338905241