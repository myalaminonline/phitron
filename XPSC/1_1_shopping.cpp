#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;

    int max_price = -1;
    for(int i = 0; i < n; i++){
        int price;
        cin >> price;
        if(price <= k){
            if(price > max_price){
                max_price = price;
            }
        }
    }

    cout << max_price << endl;
        
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Rahim has K taka and wants to buy an item from a supershop. There are N items available in the shop. The price of each item is given as an array A1,A2,A3,…,An. Rahim can only buy an item if its price is less than or equal to K.

// Your task is to find the price of the most expensive item that Rahim can afford. If Rahim cannot afford any item, print -1.

// Input Format

// The first line contains two integers N and K

// The second line contains N integers ( A1,A2,A3,…,An ) representing the prices of the items

// Constraints

// 1 ≤ N ≤ 10^5

// 1 ≤ K ≤ 10^9

// 1 ≤ Ai ≤10^9

// Output Format

// Print a single integer price of the most expensive item that Rahim can afford. If no such item exists, print -1

// Sample Input 0

// 5 100
// 20 150 70 30 200
// Sample Output 0

// 70
// Explanation 0

// Rahim has 100 taka. Affordable items are: 20, 70, 30.

// The most expensive among them is 70.

// Sample Input 1

// 4 10
// 20 30 40 50
// Sample Output 1

// -1
// Explanation 1

// All items are more expensive than 10, so Rahim cannot buy anything.