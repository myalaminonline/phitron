#include<stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    // Upper half of the diamond
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<2*i+1; k++){
            printf("*");
        }
        printf("\n");
    }
    // Lower half of the diamond
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<2*i+1; k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// W. Shape3
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print a diamond that has 2N rows.

// For more clarification see the example below.

// Input
// Only one line containing number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.

// Example
// InputCopy
// 4
// OutputCopy
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
// Note
// Don't print any extra spaces after symbol " * ".