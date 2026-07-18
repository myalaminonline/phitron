#include<stdio.h>

void minmax(int a[], int n) {
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d %d\n", min, max);
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    minmax(a, n);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// G. Max and MIN
// time limit per test1 second
// memory limit per test64 megabytes
// Given an array A of size N. Print the minimum and the maximum number in the array.

// Note: Solve this problem using function.

// Input
// First line will contain a number N (1 ≤ N ≤ 103) number of elements.

// Second line will contain N numbers (0 ≤ Xi ≤ 105).

// Output
// Print the minimum and the maximum number separated by a space.

// Example
// InputCopy
// 5
// 10 13 95 1 3
// OutputCopy
// 1 95