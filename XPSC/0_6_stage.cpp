#include<bits/stdc++.h>
using namespace std;

int main(){


    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int x = 0, y = 0;
    int my_height = a[k - 1];

    for(int i = 0; i < k - 1; i++)
    {
        if(a[i] > my_height)
        {
            x++;
        }
    }

    for(int i = k; i < n; i++)
    {
        if(a[i] < my_height)
        {
            y++;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
    
// +------------------+
// | alaminonline.com |
// +------------------+
// A huge open-air concert is happening in town. N fans are standing in a straight queue, eagerly waiting to catch a glimpse of the stage. Each person has a height, given by the array A, where A[i] is the height of the i-th person in the queue (1-indexed).

// You are standing at position K.

// The rules of visibility are simple:

// If someone in front of you is strictly taller than you, they block your view — they interrupt you.
// If someone behind you is strictly shorter than you, you block their view — you interrupt them.
// Find how many people are interrupting you, and how many people you are interrupting.

// Input Format

// First line contains two integers N and K — the total number of people and your position in the queue.
// Second line contains N space-separated integers — the array A.
// Constraints

// 1 ≤ K ≤ N ≤ 10⁵
// 1 ≤ A[i] ≤ 10⁹
// Output Format

// Print two space-separated integers X and Y, where:

// X = number of people in front of you who interrupt your view.
// Y = number of people behind you whose view you interrupt.
// Sample Input 0

// 7 4
// 3 6 5 4 2 7 1
// Sample Output 0

// 2 2