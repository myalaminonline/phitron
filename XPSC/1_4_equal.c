#include<stdio.h>

int main(){
    
    // input n
    int n;
    scanf("%d", &n);

    // input aray
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // input k
    int k;
    scanf("%d", &k);

    // searching k
    int present = 0;
    for(int i = 0; i < n; i++){
        int cur_val = a[i];

        if(cur_val == k){
            // k present
            present = 1;
            break;
        }
    }

    // print ans
    if(present == 1){
        // k present
        printf("-1\n");
    }else{
        // k missing
        int count = 0;
        for(int i = 0; i < k; i++){

            // searching i
            int present = 0;
            for(int j = 0; j < n; j++){
                int cur_val = a[j];

                if(cur_val == i){
                    // i present
                    present = 1;
                    break;
                }
            }
            
            // count missing
            if(present == 0){
                // i missing
                count++;
            }
        }
        printf("%d\n", count);        
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Rafi loves playing with numbers. One day, he found an array of integers and got curious about something called the MEX.

// The MEX (Minimum Excluded Number) of an array is the smallest non-negative integer that does NOT appear in the array.

// For example:

// mex([2,2,1])=0, since 0 does not belong to the array.
// mex([3,1,0,1])=2, since 0 and 1 belong to the array, but 2 does not.
// mex([0,3,1,2])=4, since 0, 1, 2, and 3 belong to the array, but 4 does not.
// Now, Rafi wants to make the MEX of his array exactly equal to K. He can perform the following operation any number of times:

// Append (add) any non-negative integer to the array.
// Your task is to help Rafi find the minimum number of operations needed to make the MEX equal to K. If it is impossible, print -1.

// Input Format

// First line contains an integer N — the size of the array.
// Second line contains N integers A1​,A2​,...,AN​.
// Third line contains an integer K.
// Constraints

// 1 ≤ N ≤ 1000
// 0 ≤ Ai ≤ 1000
// 0 ≤ K ≤ 1000
// Output Format

// Print a single integer — the minimum number of operations required.
// If it is impossible to make MEX = K, print -1.
// Sample Input 0

// 5
// 0 1 3 4 5
// 2
// Sample Output 0

// 0
// Explanation 0

// The current MEX is already 2, so no operation is needed.

// Sample Input 1

// 3
// 1 3 5
// 2
// Sample Output 1

// 1
// Explanation 1

// Number 0 is missing. Add 0, then MEX becomes 2.

// Sample Input 2

// 4
// 0 1 2 3
// 2
// Sample Output 2

// -1
// Explanation 2

// MEX is already 4. Since we can only append numbers, we cannot remove elements to make MEX = 2.