#include<stdio.h>
#include<stdbool.h>

void count_distinct(int a[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        bool is_distinct = true;
        for(int j=0; j<i; j++){
            if(a[i] == a[j]){
                is_distinct = false;
                break;
            }
        }
        if(is_distinct == true){
            total++;
        }
    }
    printf("%d\n", total);
}

int main(){

    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    count_distinct(a, n);
    
    return 0;
}