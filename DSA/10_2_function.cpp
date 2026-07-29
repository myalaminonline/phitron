#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {110, 120, 130, 140, 150};
    list<int> l7(v.begin(), v.end());
    cout << "l7.size() -> " << l7.size() << endl;
    cout << "l7.begin() -> " << *l7.begin() << endl;
    cout << "l7.end() -> " << *l7.end() << endl;
    for (auto it = l7.begin(); it != l7.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l7)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "l7.max_size() -> " << l7.max_size() << endl;
    cout << "l7.resize() -> ";
    l7.resize(2);
    l7.resize(5, 100);
    cout << endl;
    cout << "l7.size() -> " << l7.size() << endl;
    cout << "l7.begin() -> " << *l7.begin() << endl;
    cout << "l7.end() -> " << *l7.end() << endl;
    for (auto it = l7.begin(); it != l7.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l7)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "l7.clear() -> ";
    l7.clear();
    cout << endl;
    cout << "l7.size() -> " << l7.size() << endl;
    cout << "l7.begin() -> " << *l7.begin() << endl;
    cout << "l7.end() -> " << *l7.end() << endl;
    for (auto it = l7.begin(); it != l7.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int i : l7)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    if (l7.empty())
    {
        cout << "l7 is EMPTY now." << endl;
    }
    else
    {
        cout << "l7 is NOT EMPTY now." << endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
