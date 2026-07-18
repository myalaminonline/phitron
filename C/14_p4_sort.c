#include<stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// H. Sorting
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the numbers after sorting them.

// Note:

// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
// for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
// Input
// First line contains a number N (0 < N < 103) number of elements.

// Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the numbers after sorting them.

// Examples
// InputCopy
// 3
// 3 1 2
// OutputCopy
// 1 2 3 
// InputCopy
// 4
// 5 2 7 3
// OutputCopy
// 2 3 5 7