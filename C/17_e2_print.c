#include<stdio.h>

void print_numbers(int n){
    if(n == 0){
        return;
    }
    print_numbers(n-1);
    printf("%d\n", n);
}

int main(){
    
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// B. Print from 1 to N
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N. Print numbers from 1 to N in separate lines.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print N lines according to the required above.

// Example
// InputCopy
// 5
// OutputCopy
// 1
// 2
// 3
// 4
// 5