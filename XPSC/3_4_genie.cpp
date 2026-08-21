#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.rbegin(), a.rend());

    long long total = 0;
    long long prev = LLONG_MAX;

    for (long long x : a) {
        long long take = min(x, prev - 1);
        if (take <= 0) break;
        total += take;
        prev = take;
    }

    cout << total << "\n";
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-xpsc-recommendation-contest/challenges/here-comes-the-genie/problem?isFullScreen=true
/*
Problem Statement

Here comes the genie with  bags. The -th bag contains  balls of color . Your goal is to collect as many balls as possible. However, the genie has a condition: the number of balls you take from each color must be distinct. More formally, if you take  balls of color  where , then you cannot take  balls of another color .

For example, suppose  and .

You can take  or . However, you cannot take  or , as these sets violate the condition of having distinct elements.

It's acceptable to take  balls from multiple bags. For instance,  or  are valid.

Now, you ask yourself: What is the maximum number of balls that you can collect?

Input Format

First line contains 
Next line contains the array 
Constraints

Output Format

Output the maximum number of balls that you can collect.
Sample Input 0

4
1 1 2 1
Sample Output 0

3
Explanation 0

One strategy is to

Collect 0 balls from Bag 1.
Collect 1 ball from Bag 2.
Collect 2 balls from Bag 3.
Collect 0 balls from Bag 4.
Sample Input 1

3
1 4 5
Sample Output 1

10
Sample Input 2

4
5 1 1 4
Sample Output 2

10
Explanation 2

One strategy is to

Collect 5 balls from Bag 1.
Collect 1 ball from Bag 2.
Collect 0 ball from Bag 3.
Collect 4 balls from Bag 4.
*/