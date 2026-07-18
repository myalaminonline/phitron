#include<iostream>
using namespace std;

int main(){

    int x;
    char c;
    double d;

    cin >> x >> c >> d;
    cout << x << endl << c << endl << d << endl;

    int ascii = c;
    cout << ascii << endl;
    cout << (int)c << endl; //type custing
    cout << (char)x << endl; //type casting

    return 0;
}