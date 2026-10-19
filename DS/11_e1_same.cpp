#include <bits/stdc++.h>
using namespace std;

int main() {
    
	// test case
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
	    for(int pos=0; pos<n; pos++){
	        
	        // left small
	        int left = 0;
	        for(int i=0; i<pos; i++){
	            if(a[i]<a[pos]){
	                left++;
	            }
	        }
	        
	        // right large
	        int right = 0;
	        for(int i=pos+1; i<n; i++){
	            if(a[i]>a[pos]){
	                right++;
	            }
	        }
	        
	        // counting
	        if(left==right){
	            ans++;
	        }
	    }
	    
	    // output
	    cout<<ans<<endl;
	}
}

// https://www.codechef.com/problems/P3235
// https://www.codechef.com/viewsolution/1319584946

