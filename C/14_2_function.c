#include<stdio.h>

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2){
    int ans = num1 - num2;
    return ans;
}

int main(){

    int val1, val2;
    scanf("%d %d", &val1, &val2);

    int result1 = sum(val1, val2);
    int result2 = sub(val1, val2);

    printf("Sum: %d\n", result1);
    printf("Sub: %d\n", result2);

    return 0;
}