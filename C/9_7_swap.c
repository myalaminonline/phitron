#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("Before swap:\na = %d\nb = %d\n",a,b);
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    printf("After swap:\na = %d\nb = %d\n",a,b);
    return 0;
}