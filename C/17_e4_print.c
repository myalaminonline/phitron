#include<stdio.h>

void print(int a[], int n, int i){
    if(i < 0){
        return;
    }
    if(i % 2 == 0){
        printf("%d ", a[i]);
    }
    print(a, n, i-1);
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    print(a, n, n-1);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// F. Print Even Indices
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

// Note:

// Assume array A is 0-based indexing.
// Solve this problem using recursion.
// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print numbers in even indices in a reversed order separated by spaces.

// Examples
// InputCopy
// 4
// 1 4 2 7
// OutputCopy
// 2 1 
// InputCopy
// 7
// 1 5 8 2 3 9 11
// OutputCopy
// 11 3 8 1