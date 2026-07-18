#include <stdio.h>

long long int log2_recursion(long long int n) {
    if (n == 1) {
        return 0;
    }
    return 1 + log2_recursion(n / 2);
}

int main() {

    long long int n;
    scanf("%lld", &n);

    printf("%lld\n", log2_recursion(n));
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// P. Log2
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N
// . Print ⌊log2(N)⌋
// .

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N
//  (1≤N≤1018)
// .

// Output
// Print the answer required above.

// Examples
// InputCopy
// 1
// OutputCopy
// 0
// InputCopy
// 8
// OutputCopy
// 3