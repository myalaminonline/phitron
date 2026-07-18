#include<stdio.h>

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    return ans;
}

int main(){

    int result = sum();
    printf("Sum: %d\n", result);

    return 0;
}