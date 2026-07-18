#include<stdio.h>

void fun(int x){
    x = 20;
    printf("fun -> %d\n", x);
}

int main(){
    
    int x = 10;
    printf("main -> %d\n", x);
    
    fun(x);
    printf("main -> %d\n", x);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
