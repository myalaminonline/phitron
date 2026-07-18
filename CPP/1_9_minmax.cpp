#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    if(a < b){
        cout << a << " is smaller" << endl;
    } else {
        cout << b << " is smaller" << endl;
    }

    cout << min(a, b) << " is smaller" << endl;
    cout << max(a, b) << " is bigger" << endl;

    cout << min({1, 2, 3}) << " is smaller" << endl;
    cout << max({a, b, 1, 2}) << " is bigger" << endl;

    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}