#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Theoretical Question Explanation
    cout << R"(

(a) Why do you think linked-list requires more memory than an array when storing the same number of elements?

Linked-list requires more memory than an array when storing the same number of elements, because it stores the value as well as the pointer of the next node.

(b) Write down Three Limitations of the array which can be solved by the use of Linked List.
Three Limitations of the array which can be solved by the use of Linked List:
1. Fixed size
2. Sequential memory allocation
3. Costly Insertions and Deletions 

(c) What is the value of Head?
The value of Head is 500.

(d) What is the value of ? marked address location?
The value of ? marked address location is 1020.

(e) What will be the value of Head->Next->Next->Value?
The value of Head->Next->Next->Value will be 1.

(f) What will be the value of Sum following pseudocode snippets? 
Sum = 0
Temp = Head
While ( Temp -> Next!= 1020){
	Sum += Temp-> value
	Temp = Temp -> Next
}
Sum -= Temp -> value;
//The value of Sum will be: (5+7+1)-14 = -1

)" << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
