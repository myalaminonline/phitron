#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v = {1,2,3,2,4,2,5};
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    replace(v.begin(), v.end(), 2, 100);
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    replace(v.begin(), v.end()-2, 100, 200);
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    //vector<int>:: iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 100);
    if(it==v.end()){
        cout << "Not found";
    }else{
        cout << "Found";
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
