#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    cout << "l1.size() -> " << l1.size() << endl;
    cout << "l1.begin() -> " << *l1.begin() << endl;
    cout << "l1.end() -> " << *l1.end() << endl;
    for (auto it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l1){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l2(10);
    cout << "l2.size() -> " << l2.size() << endl;
    cout << "l2.begin() -> " << *l2.begin() << endl;
    cout << "l2.end() -> " << *l2.end() << endl;
    for (auto it = l2.begin(); it != l2.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l2){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l3(10, 3);
    cout << "l3.size() -> " << l3.size() << endl;
    cout << "l3.begin() -> " << *l3.begin() << endl;
    cout << "l3.end() -> " << *l3.end() << endl;
    for (auto it = l3.begin(); it != l3.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l3){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l4{10,20,30,40,50};
    cout << "l4.size() -> " << l4.size() << endl;
    cout << "l4.begin() -> " << *l4.begin() << endl;
    cout << "l4.end() -> " << *l4.end() << endl;
    for (auto it = l4.begin(); it != l4.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l4){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l5(l4);
    cout << "l5.size() -> " << l5.size() << endl;
    cout << "l5.begin() -> " << *l5.begin() << endl;
    cout << "l5.end() -> " << *l5.end() << endl;
    for (auto it = l5.begin(); it != l5.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l5){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    int a[]={60,70,80,90,100};
    list<int> l6(a,a+5);
    cout << "l6.size() -> " << l6.size() << endl;
    cout << "l6.begin() -> " << *l6.begin() << endl;
    cout << "l6.end() -> " << *l6.end() << endl;
    for (auto it = l6.begin(); it != l6.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l6){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    vector<int> v={110,120,130,140,150};
    list<int> l7(v.begin(), v.end());
    cout << "l7.size() -> " << l7.size() << endl;
    cout << "l7.begin() -> " << *l7.begin() << endl;
    cout << "l7.end() -> " << *l7.end() << endl;
    for (auto it = l7.begin(); it != l7.end(); it++){
        cout << *it << " ";
        }
    cout << endl;
    for (int i : l7){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
