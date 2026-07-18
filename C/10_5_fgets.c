#include<stdio.h>
int main(){
    
    char s[50];
    
    // scanf("%s",&s);
    // gets(s);
    fgets(s,15,stdin);
    printf("%s\n",s);

    return 0;
}