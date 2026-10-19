#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l1 = {10, 20, 30, 40, 50};

    list<int> l2;
    l2 = l1;
    cout << "l2 = l1 ->" << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    cout << "l3.assign(l1.begin(), l1.end()) ->" << endl;
    for (int i : l3)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.push_back(60);
    cout << "l1.push_back(60) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.pop_back();
    cout << "l1.pop_back() ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.push_front(5);
    cout << "l1.push_front(5) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.pop_front();
    cout << "l1.pop_front() ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "*next(l1.begin(), 2) ->" << endl;
    cout << *next(l1.begin(), 2) << endl;
    cout << endl;

    l1.insert(next(l1.begin(), 2), 100);
    cout << "l1.insert(next(l1.begin(), 2), 100) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l4 = {1, 2, 3, 4, 5};
    l1.insert(next(l1.begin(), 2), l4.begin(), l4.end());
    cout << "l1.insert(next(l1.begin(), 2), l4.begin(), l4.end()) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
