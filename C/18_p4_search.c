#include<stdio.h>

int main(){
    
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == x){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }

    if(flag == 1){
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// S. Search In Matrix
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

// Input
// First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

// Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

// Last line contains a number X (0 ≤ X ≤ 105) described above.

// Output
// Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".

// Examples
// InputCopy
// 2 2
// 1 2
// 3 4
// 3
// OutputCopy
// will not take number
// InputCopy
// 2 2
// 1 2
// 3 4
// 10
// OutputCopy
// will take number