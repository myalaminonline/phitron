#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> even_pos_values;
    for(int i=1; i<n; i+=2){
        even_pos_values.push_back(a[i]);
    }
    sort(even_pos_values.begin(), even_pos_values.end());
    
    int sum = 0;
    for(int i=0; i<even_pos_values.size(); i+=2){
        if(i+1 < even_pos_values.size()) sum += even_pos_values[i] + even_pos_values[i+1];
        else sum += even_pos_values[i];
    }
    cout<<sum<<endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-cp-track-selection-contest-b9-1/challenges/max-adjacent-sum-1/problem?isFullScreen=true
/*
In a magical kingdom, there is a long road with  treasure boxes placed in a line. Each box contains some gold coins, represented by a positive integer. The king has given you a special power:

You can rearrange the treasure boxes placed at even positions (2nd, 4th, 6th, ……) in any order you like.
However, these boxes must stay in even positions.
The boxes at odd positions (1st, 3rd, 5th, ……) cannot be moved.
After rearranging the boxes at even positions, the king wants to know the maximum possible sum of coins between any two adjacent boxes.

Your task is to help the king maximize the adjacent sum.

Input Format

The first line contains a single positive integer N.
The next line will contain N positive integers.
Constraints

Output Format

Your task is to help the king maximize the adjacent coin sum according to the problem statement.

Sample Input 0

7
4 8 2 5 1 7 5 
Sample Output 0

13
Explanation 0

We can only rearrange the values at even positions, and they must remain in even positions. a[2] = 8, a[4] = 5, a[6] = 7

We can rearrange them as: a[2] = 5, a[4] = 7, a[6] = 8

After rearranging, the updated array becomes: a = [4, 5, 2, 7, 1, 8, 5]

Now we calculate the sum of adjacent elements. The maximum adjacent sum occurs at positions 6 and 7: a[6] + a[7] = 8 + 5 = 13
*/