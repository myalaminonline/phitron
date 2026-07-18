#include<stdio.h>
int main(){
    
    char s[100+1];
    scanf("%s",&s);

    // int count = 0;
    // for(int i=0;s[i]!='\0';i++){
    //     count++;
    // }

    int count = strlen(s);

    printf("%s\n",s);
    printf("Length: %d\n",count);

    return 0;
}