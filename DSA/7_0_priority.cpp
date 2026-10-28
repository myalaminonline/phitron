#include<bits/stdc++.h>
using namespace std;

int main(){
    // max priority
    cout<<"Max Priority:"<<endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout<<pq.top()<<endl; // 20
    pq.push(100);
    cout<<pq.top()<<endl; // 100
    pq.pop(); // 100
    pq.pop(); // 20
    cout<<pq.top()<<endl; // 10

    // min priority
    cout<<endl<<"Max Priority:"<<endl;
    priority_queue<int, vector<int>, greater<int>> pqmin;
    pqmin.push(10);
    pqmin.push(5);
    pqmin.push(20);
    cout<<pqmin.top()<<endl; // 5
    pqmin.push(100);
    cout<<pqmin.top()<<endl; // 5
    pqmin.pop(); // 5
    pqmin.pop(); // 10
    cout<<pqmin.top()<<endl; // 20

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
