#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // initialization 1
    vector<int> v1;
    cout << v1.size() << endl;

    // initialization 2
    vector<int> v2(5);
    cout << v2.size() << endl;

    // initialization 3
    vector<int> v3(5,-1);
    cout << v3.size() << endl;
    for(int i=0; i<v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    // initialization 4
    vector<int> v4(v3);
    cout << v4.size() << endl;
    for(int i=0; i<v4.size(); i++){
        cout << v4[i] << " ";
    }
    cout << endl;

    // initialization 5
    int a[5]={1,2,3,4,5};
    vector<int> v5(a,a+5);
    cout << v5.size() << endl;
    for(int i=0; i<v5.size(); i++){
        cout << v5[i] << " ";
    }
    cout << endl;

    // initialization 6
    vector<int> v6={1,2,3,4,5};
    cout << v6.size() << endl;
    for(int i=0; i<v6.size(); i++){
        cout << v6[i] << " ";
    }
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
