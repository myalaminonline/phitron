#include<iostream>
using namespace std;

int main(){

    int x = 10;

    if(x%2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    //ternary
    x%2 == 0 ? cout << "Even\n" : cout << "Odd\n";
    cout << (x%2 == 0 ? "Even" : "Odd") << endl;

    return 0;
}