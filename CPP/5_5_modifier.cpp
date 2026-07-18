#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "Hi";
    cout << "s -> " << s << endl;

    s = "Hello World";
    cout << "s -> " << s << endl;
    
    s.assign("Hello World");
    cout << "s.assign(\"Hello World\") -> " << s << endl;

    s.erase(3);
    cout << "s.erase(3) -> " << s << endl;

    s.assign("Hello World");
    //cout << "s.assign(\"Hello World\") -> " << s << endl;

    s.resize(3);
    cout << "s.resize(3) -> " << s << endl;

    s.assign("Hello World");
    //cout << "s.assign(\"Hello World\") -> " << s << endl;

    s.erase(3,5);
    cout << "s.erase(3,5) -> " << s << endl;

    s.assign("Hello World");
    //cout << "s.assign(\"Hello World\") -> " << s << endl;

    s.replace(6,5,"Bangladesh");
    cout << "s.replace(6,5,\"Bangladesh\") -> " << s << endl;

    s.assign("Hello World");
    //cout << "s.assign(\"Hello World\") -> " << s << endl;

    s.insert(5,"Programming");
    cout << "s.insert(5,\"Programming\") -> " << s << endl;

    s.assign("Hello World");
    //cout << "s.assign(\"Hello World\") -> " << s << endl;

    s.replace(5,0,"Programming");
    cout << "s.replace(5,0,\"Programming\") -> " << s << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
