#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v;
    cout << "v.size() -> " << v.size() << endl;
    cout << "v.max_size() -> " << v.max_size() << endl;
    cout << "v.capacity() -> " << v.capacity() << endl;
    cout << endl;

    v.push_back(10);
    cout << "v.capacity() -> " << v.capacity() << endl;
    v.push_back(20);
    cout << "v.capacity() -> " << v.capacity() << endl;
    v.push_back(30);
    cout << "v.capacity() -> " << v.capacity() << endl;
    v.push_back(40);
    cout << "v.capacity() -> " << v.capacity() << endl;
    v.push_back(50);
    cout << "v.capacity() -> " << v.capacity() << endl;
    cout << endl;

    if(v.empty()){
        cout << "EMPTY" << endl;
    }else{
        cout << "NOT EMPTY" << endl;
    }
    cout << "v.size() -> " << v.size() << endl;
    cout << endl;

    v.resize(2);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "v.size() -> " << v.size() << endl;
    cout << endl;

    v.resize(5,100);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "v.size() -> " << v.size() << endl;
    cout << endl;

    v.clear();
    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " ";
    cout << endl;
    cout << "v.size() -> " << v.size() << endl;
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
