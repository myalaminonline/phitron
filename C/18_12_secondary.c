#include<stdio.h>
#include<stdbool.h>

int main(){
    
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // secondary diagonal matrix
    if(r == c){ // square
        bool is_ok = true;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(i + j != r - 1){ // outside secondary
                    if(a[i][j] != 0){ // not zero
                        is_ok = false;
                        printf("\nThis is not a secondary diagonal matrix\n");
                        break;
                    }
                }
            }
        }
        if(is_ok == true){
            printf("\nThis is a secondary diagonal matrix\n");
        }
    } else { // not square
        printf("\nThis is not a secondary diagonal matrix\n");
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
