#include<stdio.h>
int main(){
    
    char s[1000001];
    //getline() used in c++ but in c we can use fgets()
    fgets(s,1000001,stdin);

    for(int i=0;s[i]!='\\';i++){
        printf("%c",s[i]);
    }

    return 0;
}