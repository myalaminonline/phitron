#include<stdio.h>
#include<string.h>
int main(){
    
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        char s[51]= {0},t[51]={0};
        scanf("%s %s",s,t);

        for(int j=0;j<51;j++){
            if(s[j]=='\0' && t[j]=='\0'){
                break;
            }
            else if(s[j]=='\0'){
                printf("%c",t[j]);
            }
            else if(t[j]=='\0'){
                printf("%c",s[j]);
            }
            else{
                printf("%c%c",s[j],t[j]);
            }
        }
        printf("\n");
        
    }

    return 0;
}