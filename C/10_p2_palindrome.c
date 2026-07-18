#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int palindrome = 1;
    for(int i=0;i<n/2;i++){
        if(a[i] != a[n-1-i]){
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