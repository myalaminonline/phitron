#include <bits/stdc++.h>
using namespace std;

int main() {
    
	// testcase
	int t; cin>>t;
	while(t--){
	    
	    // input
	    int n; cin>>n;
	    vector<int> a(n);
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    // process
	    int ans=0;
	    sort(a.begin(), a.end());
	    while(a[0]!=a[n-1]){
	        a[n-1]= floor(a[n-1]/2.0);
	        ans++;
	        sort(a.begin(), a.end());
	    }
	    
	    // output
	    cout<<ans<<endl;
	}
}

// https://www.codechef.com/problems/DIV2
// https://www.codechef.com/viewsolution/1321438125
