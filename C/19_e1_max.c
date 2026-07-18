#include<stdio.h>

int max(int a[], int n){
    if(n == 1){
        return a[0];
    }
    int m = max(a, n-1);
    if(m > a[n-1]){
        return m;
    } else {
        return a[n-1];
    }
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("%d", max(a, n));
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// K. Max Number
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the maximum value in this array.

// Note: Solve this problem using recursion.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print the maximum value in this array.

// Example
// InputCopy
// 5
// 1 -3 5 4 -6
// OutputCopy
// 5