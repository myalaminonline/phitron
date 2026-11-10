#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];

// DFS ফাংশন যা একটি কম্পোনেন্টের সব সংযুক্ত নোডকে ভিজিট করবে
void dfs(int node) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {
    // ফাস্ট I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // ইনপুট থেকে গ্রাফ (Adjacency List) তৈরি
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // এটি Undirected Graph
    }

    // প্রতিটি কম্পোনেন্টের লিডার বা প্রতিনিধি নোড স্টোর করার জন্য
    vector<int> leaders; 

    // কম্পোনেন্ট বের করার লুপ
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            leaders.push_back(i); // নতুন কম্পোনেন্ট পাওয়া গেছে, লিডার হিসেবে সেভ করি
            dfs(i);               // এই কম্পোনেন্টের বাকি সব নোড ভিজিট করে মার্ক করে দিই
        }
    }

    // নতুন রাস্তার সংখ্যা হবে মোট কম্পোনেন্টের চেয়ে ১ কম
    int new_roads = leaders.size() - 1;
    cout << new_roads << "\n";

    // লিডার নোডগুলোর মধ্যে রাস্তা তৈরি
    for (int i = 0; i < new_roads; i++) {
        cout << leaders[i] << " " << leaders[i + 1] << "\n";
    }

    return 0;
}
// +------------------+
// | alaminonline.com |
// +------------------+
// https://cses.fi/problemset/task/1666/
/*
Sample Input:
4 2
1 2
3 4

Sample Output:
1
1 3

*/