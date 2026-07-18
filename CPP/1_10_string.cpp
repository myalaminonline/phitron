#include<iostream>
using namespace std;

int main(){

    int x;
    cin >> x;
    cout << x << endl;

    char a[100];
    // cin >> a;
    cin.ignore();
    cin.getline(a, 100);
    cout<< a << endl;

    string s;
    // cin >> s;
    getline(cin, s);
    cout << s << endl;
   
    return 0;
}