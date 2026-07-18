#include<stdio.h>

void sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("Sum: %d\n", ans);
}

int main(){

    sum();

    return 0;
}