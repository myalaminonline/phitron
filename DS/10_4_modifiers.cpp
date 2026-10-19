#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l1 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "l1 -> " << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.erase(next(l1.begin(), 3));
    cout << "l1.erase(next(l1.begin(),3)) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.erase(next(l1.begin(), 4), next(l1.begin(), 7));
    cout << "l1.erase(next(l1.begin(),4), next(l1.begin(),7)) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l2 = {10, 20, 30, 20, 40, 20, 50, 20};
    cout << "l2 -> " << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    replace(l2.begin(), l2.end(), 20, 100);
    cout << "replace(l2.begin(), l2.end(), 20, 100) ->" << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    auto it = find(l2.begin(), l2.end(), 100);
    if (it == l2.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
