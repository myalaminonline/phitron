#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int x;
    while(cin >> x){
        cout << x << endl;
    }

    double d = 23.4567;
    cout << fixed << setprecision(2) << d << endl;

    return 0;
}