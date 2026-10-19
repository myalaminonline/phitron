#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2;

    v2 = v1;
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;

    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    v2.push_back(6);
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    v2.pop_back();
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    v2.insert(v2.begin()+2, 100);
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    vector<int> v3={10,20,30};
    v2.insert(v2.begin()+3, v3.begin(), v3.end());
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    v2.erase(v2.begin()+5);
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    v2.erase(v2.begin()+2, v2.begin()+5);
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
