#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v={1,2,3,4,5,6};
    
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "v[3] -> " << v[3] << endl;
    cout << "v.at(3) -> " << v.at(3) << endl;
    cout << endl;

    cout << "v.front() -> " << v.front() << endl;
    cout << "v[0] -> " << v[0] << endl;
    cout << endl;
    
    cout << "v.back() ->" << v.back() << endl;
    cout << "v[v.size()-1] ->" << v[v.size()-1] << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
