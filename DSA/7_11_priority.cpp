#include<bits/stdc++.h>
using namespace std;

int main(){

    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(10);
    // pq.push(5);
    // cout<<pq.top();

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({10, 1});
    pq.push({5, 2});
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
    // pair working on first value only.

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
