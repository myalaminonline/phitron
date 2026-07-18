#include<stdio.h>
#include<string.h>
int main(){
    
    char a[101],b[101];
    scanf("%s %s",a,b);
    printf("%s %s\n",a,b);

    // int i=0;
    // while(1){
    //     if(a[i]=='\0' && b[i]=='\0'){
    //         printf("Equal");
    //         break;
    //     }
    //     else if(a[i]=='\0'){
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if(b[i]=='\0'){
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if(a[i]<b[i]){
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if(a[i]>b[i]){
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if(a[i]==b[i]){
    //         i++;
    //     }
    // }

    int val = strcmp(a,b);
    if(val<0){
        printf("A is smaller");
    }
    else if(val==0){
        printf("Equal");
    }
    else if(val>0){
        printf("B is smaller");
    }

    return 0;
}