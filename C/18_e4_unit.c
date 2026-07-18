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

    // unit matrix
    bool flag = true;
    if(r != c){ // not square
        flag = false;
    } else { // square
        int diagonal_value = 1;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(i == j){ // on diagonal
                    if(a[i][j] != diagonal_value){
                        flag = false;
                        break;
                    }
                } else { // outside diagonal
                    if(a[i][j] != 0){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == false){
                break;
            }
        }
    }

    if(flag == true){
        printf("This is a unit matrix\n");
    } else {
        printf("This is not a unit matrix\n");
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
                    