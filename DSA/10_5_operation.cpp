#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l1 = {60, 70, 90, 10, 20, 10, 30, 40, 50, 10, 80};
    cout << "l1 -> " << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.remove(10);
    cout << "l1.remove(10) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.sort();
    cout << "l1.sort() ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l1.sort(greater<int>());
    cout << "l1.sort(greater<int>()) ->" << endl;
    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l2 = {60, 70, 90, 10, 20, 10, 30, 40, 50, 10, 80};
    cout << "l2 -> " << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l2.sort();
    cout << "l2.sort() ->" << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l2.unique();
    cout << "l2.unique() ->" << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l3 = {60, 70, 90, 10, 20, 10, 30, 40, 50, 10, 80};
    cout << "l3 -> " << endl;
    for (int i : l3)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l3.sort(greater<int>());
    cout << "l3.sort(greater<int>()) ->" << endl;
    for (int i : l3)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l3.unique();
    cout << "l3.unique() ->" << endl;
    for (int i : l3)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    list<int> l4 = {60, 70, 90, 10, 20, 10, 30, 40, 50, 10, 80};
    cout << "l4 -> " << endl;
    for (int i : l4)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    l4.reverse();
    cout << "l4.reverse() ->" << endl;
    for (int i : l4)
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
