#include<stdio.h>
int main(){
    
        int n;
        scanf("%d", &n);
    
        int days = 0;
        for(int i = 0; i < n; i++){

            int m1,m2,d;
            scanf("%d %d %d", &m1, &m2, &d);
            
            days = d-((d*m1)/(m1+m2));
            printf("%d\n", days);
        }
    
    return 0;
}