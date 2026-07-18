#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    s = "Hello";

    cout << "s -> " <<s << endl;
    cout << "s.size() -> " << s.size() << endl;
    cout << "s.length() -> " << s.length() << endl;
    cout << "s.max_size() -> " << s.max_size() << endl;
    cout << "s.capacity() -> " << s.capacity() << endl;
    
    s.resize(4);
    cout << "s.resize(4) -> " << s << endl;
    s.resize(10,'o');
    cout << "s.resize(10,'o') -> " << s << endl;
    
    s.clear();
    cout << "s.empty() -> " << s.empty() << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
