#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[i] > a[j]){
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    sort(a, a+n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
        
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// H. Sorting
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the numbers after sorting them.

// Note:

// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
// for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
// Input
// First line contains a number N (0 < N < 103) number of elements.

// Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the numbers after sorting them.

// Examples
// InputCopy
// 3
// 3 1 2
// OutputCopy
// 1 2 3 
// InputCopy
// 4
// 5 2 7 3
// OutputCopy
// 2 3 5 7