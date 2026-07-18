#include<stdio.h>

void change_it(int a[], int n){
    a[n-1] = 100;
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    change_it(a, n);

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Question: Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.



// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 10 20 30 40 100
// 3
// 1 2 3
// 1 2 100