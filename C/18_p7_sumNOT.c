#include<stdio.h>

int sum(int a[], int n){
    if(n == 0){
        return 0;
    }
    return a[n - 1] + sum(a, n - 1);
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("%d\n", sum(a, n));

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// L. Summation
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the summation of the array elements.

// Note: Solve this problem using recursion.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print the summation of the N numbers.

// Examples
// InputCopy
// 4
// 1 4 2 7
// OutputCopy
// 14
// InputCopy
// 4
// 5 5 5 5
// OutputCopy
// 20