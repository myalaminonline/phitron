#include<bits/stdc++.h>
using namespace std;

int main(){
    
    list<int> l1={10,20,30,40,50};
    cout << "l1 -> " << endl;
    for(int i:l1){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "l1.front() -> " << l1.front() << endl;
    cout << "l1.back() -> " << l1.back() << endl;
    cout << endl;

    cout << "l1.begin() -> " << *l1.begin() << endl;
    cout << "l1.end() -> " << *l1.end() << endl;
    cout << endl;   

    cout << "next(l1.begin(),2) -> " << *next(l1.begin(),2) << endl;
    cout << "prev(l1.end(),1) -> " << *prev(l1.end(),1) << endl; 
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
