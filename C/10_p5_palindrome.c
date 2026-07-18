#include<stdio.h>
int main(){
    
    char s[1001];
    scanf("%s",s);

    int length = strlen(s);

    int palindrome = 1;
    for(int i=0;i<length/2;i++){
        if(s[i] != s[length-1-i]){
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}