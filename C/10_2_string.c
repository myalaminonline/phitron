#include<stdio.h>
int main(){
    
    char c[6];

    for(int i=0;i<6;i++){
        scanf("%c",&c[i]);
    }

    for(int i=0;i<6;i++){
        printf("%c",c[i]);
    }

    return 0;
}