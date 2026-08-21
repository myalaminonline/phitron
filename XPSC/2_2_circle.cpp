#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j && a[i] <= a[j]){
                    flag = true;
                    break;
                }
                else flag = false;
            }
            if(!flag) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-cp-track-selection-contest-b9-1/challenges/balanced-circle/problem?isFullScreen=true
/*
A group of N players is preparing for a circular discussion. Each player has a skill level Ai.

You must arrange all N players around a circular table. Each player has exactly two neighbors: the player sitting immediately to their left and the player sitting immediately to their right.

A circular arrangement is called balanced if every player has at least one neighbor whose skill level is less than or equal to their own skill level.

Determine whether it is possible to create a balanced circular arrangement.

Input Format

The first line of input contains a single integer T, the number of test cases.

Each test case consists of:

The first line contains a single integer N, the number of players.

The second line containing N space-separated integers:

A_1, A_2 ,..., A_N

where A_i represents the skill level of the i-th player.

Constraints

1 <= T <= 10

3 <= N <= 10^5

1 <= A_i <= 10^9

Output Format

For each test case, print:

"YES" if a balanced circular arrangement exists.
"NO" otherwise.
Sample Input 0

3
4
3 1 2 1
3
5 1 3
5
4 4 4 4 4
Sample Output 0

YES
NO
YES
Explanation 0

Test Case 1:

The players can be arranged as: [1,1,3,2]

Each player with skill level (1) has another player with skill level (1) as a neighbor.

The player with skill level (3) has a neighbor with skill level (2).

The player with skill level (2) has a neighbor with skill level (1).

Therefore, every player has at least one neighbor whose skill level is less than or equal to their own.

So the answer is YES.

Test Case 2:

The player with skill level (1) has no other player with skill level less than or equal to (1).

Therefore, no matter how the players are arranged, this player cannot have a suitable neighbor.

So the answer is NO.

Test Case 3 All players have the same skill level.

Therefore, every player automatically has neighbors with skill level equal to their own. So the answer is YES.
*/