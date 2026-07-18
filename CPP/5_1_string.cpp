#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char c[101]="Hello";
    cout << c << " " << c[0] << endl;
    strcpy(c, "World");
    cout << c << " " << c[0] << endl;

    char c2[101]="World";
    if(strcmp(c, c2) == 0){
        cout << "Same" << endl;
    } else {
        cout << "Not Same" << endl;
    }

    string s = "Amar";
    cout << s << " " <<s[0] << endl;
    s = "Babaiya";
    cout << s << " " <<s[0] << endl;

    string s2 = "Babaiya";
    if(s==s2){
        cout << "Same" << endl;
    } else {
        cout << "Not Same" << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
