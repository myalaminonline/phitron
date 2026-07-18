#include<stdio.h>

int count_odd(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("%d\n", count_odd(a, n));

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Question: Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.



// Sample Input
// Sample Output
// 5
// 1 5 4 10 2
// 2