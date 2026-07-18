#include<stdio.h>

int main(){
    
    int a[5] = {10, 20, 30, 40, 50};
    
    printf("a[0] = %d\n", a[0]);
    printf("a[1] = %d\n", a[1]);
    printf("a[2] = %d\n", a[2]);
    printf("a[3] = %d\n", a[3]);
    printf("a[4] = %d\n", a[4]);

    printf("\n");
    printf("*(a + 0) = %d\n", *(a + 0));
    printf("*(a + 1) = %d\n", *(a + 1));
    printf("*(a + 2) = %d\n", *(a + 2));
    printf("*(a + 3) = %d\n", *(a + 3));
    printf("*(a + 4) = %d\n", *(a + 4));
    
    printf("\n");
    printf("&a[0] = %d\n", &(a[0]));
    printf("&a[1] = %d\n", &(a[1]));
    printf("&a[2] = %d\n", &(a[2]));
    printf("&a[3] = %d\n", &(a[3]));
    printf("&a[4] = %d\n", &(a[4]));

    printf("\n");
    printf("&a = %d\n", &a);

    a[0] = 100;
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    *(a + 1) = 200;
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
