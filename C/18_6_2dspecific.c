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

    int specific_r;
    scanf("%d", &specific_r);
    
    for(int j = 0; j < c; j++){
        printf("%d ", a[specific_r][j]);
    }

    printf("\n\n");

    int specific_c;
    scanf("%d", &specific_c);

    for(int i = 0; i < r; i++){
        printf("%d\n", a[i][specific_c]);
    }

    printf("\n\n");

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == specific_r || j == specific_c){
                printf("%d ", a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }



    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
