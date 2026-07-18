#include<stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// P. Shape1
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print a face down right angled triangle that has N rows.

// For more clarification see the example below.

// Input
// Only one line containing a number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.

// Example
// InputCopy
// 4
// OutputCopy
// ****
// ***
// **
// *
// Note
// Don't print any extra spaces after symbol " * ".