#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", add(a, b));

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// A. Add
// time limit per test1 second
// memory limit per test64 megabytes
// Given two numbers X and Y, Print their summation.

// Note: Solve this problem using function.

// Input
// Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

// Output
// Print the summation value.

// Example
// InputCopy
// 5 2
// OutputCopy
// 7