#include<stdio.h>

void print(int n){
    if(n == 0){
        return;
    }
    printf("I love Recursion\n");
    print(n-1);
}

int main(){
    
    int n;
    scanf("%d", &n);

    print(n);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// A. Print Recursion
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N
// . Print "I love Recursion" N
//  times.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N
//  (1≤N≤100)
//  .

// Output
// Print "I love Recursion" N
//  times.

// Example
// InputCopy
// 3
// OutputCopy
// I love Recursion
// I love Recursion
// I love Recursion