#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // testcase
    int t; cin>>t;
    while (t--){

        // input
        int n; cin>>n;
        int p; cin>>p;
        string s; cin>>s;

        // process
        int need_changes_for_left = 0;
        for(int i=0; i<p; i++){
            if(s[i] == 'R') need_changes_for_left++;
        }
        int need_changes_for_right = 0;
        for(int i=p-1; i<n; i++){
            if(s[i] == 'L') need_changes_for_right++;
        }
        int changes = min(need_changes_for_left, need_changes_for_right);

        // output
        cout << changes << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.codechef.com/problems/CONVEYOR
// https://www.codechef.com/viewsolution/1339046186
