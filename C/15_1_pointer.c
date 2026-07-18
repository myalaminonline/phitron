#include<stdio.h>

int main(){
    
    int n = 10; 
    printf("%d\n", n);
    printf("%p\n\n", &n);

    int* p = &n;
    *p = 20;
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
