#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // array size 
    int n;
    cin >> n;

    // array declare
    int a[n];

    // array input
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // array output
    for(int i=0; i<n; i++){
        cout << a[i] <<" ";
    }
    cout << endl;

    
    
    // vector size
    int p;
    cin >> p;

    // vector declare
    vector<int> v1(p);

    // vector input
    for(int i=0; i<p; i++){
        cin >> v1[i];
    }

    // vactor output
    for(int i=0; i<p; i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    

    // vector size
    int q;
    cin >> q;

    // vector declare
    vector<int> v2;

    // vector input
    for(int i=0; i<q; i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }

    // vactor output
    for(int i=0; i<q; i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
