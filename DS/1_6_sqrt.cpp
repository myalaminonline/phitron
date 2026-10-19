#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;

    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout << i << " " << n/i << " ";
        }
    }
    cout << endl;

    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout << i << " " << n/i << " ";
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// complexity = O(sqrt(N))
