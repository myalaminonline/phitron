#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "Hello";
    cout << "s -> " << s << endl;

    string s2 = "Ma";
    cout << "s2 -> " << s2 << endl;

    s+=s2;
    cout << "s+=s2 -> " << s << endl;

    s.append(s2);
    cout << "s.append(s2) -> " << s << endl;

    s.push_back('!');
    cout << "s.push_back('!') -> " << s << endl;

    s.pop_back();
    cout << "s.pop_back() -> " << s << endl;

    s+="!";
    cout << "s+=\"!\" -> " << s << endl;

    s[0]='G';
    cout << "s[0]=\'G\' -> " << s << endl;

    s[10]='!'; // not possible
    cout << "s[10]=\'!\' -> " << s << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
