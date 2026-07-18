#include<stdio.h>

int main(){

    char f1[100], s1[100], f2[100], s2[100];
    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    int count_s1 = 0, count_s2 = 0;
    for(int i=0; s1[i] != '\0'; i++){
        count_s1++;
    }
    for(int i=0; s2[i] != '\0'; i++){
        count_s2++;
    }

    int flag = 1;
    if(count_s1 != count_s2){
        flag = 0;
    } else {
        for(int i=0; i<count_s1; i++){
            if(s1[i] != s2[i]){
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1){
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// L. The Brothers
// time limit per test1 second
// memory limit per test256 megabytes
// Given two person names.

// Each person has {"the first name" + "the second name"}

// Determine whether they are brothers or not.

// Note: The two persons are brothers if they share the same second name.

// Input
// First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

// Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

// Output
// Print "ARE Brothers" if they are brothers otherwise print "NOT".

// Examples
// InputCopy
// bassam ramadan
// ahmed ramadan
// OutputCopy
// ARE Brothers
// InputCopy
// ali salah
// ayman salah
// OutputCopy
// ARE Brothers
// InputCopy
// ali kamel
// ali salah
// OutputCopy
// NOT

