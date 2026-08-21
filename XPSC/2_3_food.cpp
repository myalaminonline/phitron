#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int Q; cin>>Q;
    queue<int> q;
    while(Q--){
        int type; cin>>type;
        if(type == 1){
            int x; cin>>x;
            q.push(x);
        }else{
            if(q.empty()) cout<<-1<<endl;
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-cp-track-selection-contest-b9-1/challenges/serve-the-food/problem?isFullScreen=true
/*
A restaurant receives food orders throughout the day.

Initially, there are no pending orders.

You need to process Q operations of the following two types:

1 X : A customer places an order for food numbered X.
2 : The restaurant prepares and serves the order that has been waiting for the longest time. Print the food number of the served order. If No order is pending print -1.
Input Format

The first line contains a single integer Q — the number of operations.

Each of the next Q lines describes one operation.

If the operation is of type 1, it is given as:

1 X
where X is the food number.

If the operation is of type 2, it is given as:

2
Constraints

1 <= Q <= 10^5

1 <= X <= 10^9

It is guranteed that there is at least one type 2 query.

Output Format

For every operation of type 2, print the food number of the order that is served. If no food is served print -1.

Sample Input 0

9
1 5
1 3
2
1 10
1 7
2
2
2
2
Sample Output 0

5
3
10
7
-1
Explanation 0

The orders arrive in the following order:

Order 5
Order 3
Serve 5
Order 10
Order 7
Serve 3
Serve 10
Serve 7
Serve nothing -1
The restaurant always serves the order that has been waiting the longest.
*/