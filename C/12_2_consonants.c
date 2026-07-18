#include<stdio.h>
int main(){
    
    char s[1000001];
    scanf("%s",s);

    int consonants = 0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a' && s[i]<='z')){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                consonants++;
            }
        }
    }
    
    printf("%d", consonants);

    return 0;
}