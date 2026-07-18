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

    if(r == 1){
        printf("This is a Row Matrix");
    } else {
        printf("This is a not a Row Matrix");
    }

    if(c == 1){
        printf("\nThis is a Column Matrix");
    } else {
        printf("\nThis is a not a Column Matrix");
    }

    if(r == c){
        printf("\nThis is a Square Matrix");
    } else {
        printf("\nThis is a not a Square Matrix");
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
