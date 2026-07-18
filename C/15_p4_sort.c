#include<stdio.h>

void sort(int a, int b, int c) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("%d\n%d\n%d\n", a, b, c);
}

int main(){
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    sort(a, b, c);

    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// T. Sort Numbers
// time limit per test0.25 seconds
// memory limit per test256 megabytes
// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

// Examples
// InputCopy
// 3 -2 1
// OutputCopy
// -2
// 1
// 3

// 3
// -2
// 1
// InputCopy
// -2 10 0
// OutputCopy
// -2
// 0
// 10

// -2
// 10
// 0