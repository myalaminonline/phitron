#include<bits/stdc++.h>
using namespace std;

void equilibrium(int a[], int n){

    long total=0;
    for(int i=0; i<n; i++) total+=a[i];

    long left=0;
    for(int i=0; i<n; i++){

        left = left+a[i];
        long right = total-left+a[i];

        if(left==right){
            cout<<left<<" "<<i+1<<endl;
            return;
        }
    }
    
    cout<<"UNSTABLE"<<endl;
    return;
}


int main(){
    
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    equilibrium(a,n);

    return 0;
}

/*
void equilibrium(vector<int> v){

    int n = v.size();
    long total=0;
    for(int i=0; i<n; i++) total+=v[i];

    long left=0;
    for(int i=0; i<n; i++){

        left = left+v[i];
        long right = total-left+v[i];

        if(left==right){
            cout<<left<<" "<<i+1<<endl;
            return;
        }
    }
    
    cout<<"UNSTABLE"<<endl;
    return;
}


int main(){
    
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    equilibrium(v);

    return 0;
}
*/

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/phitron-xpsc-recommendation-contest/challenges/perfect-balancer/problem?isFullScreen=true
/*
Problem Statement

A team of scientists in the futuristic city of Equilibrium is experimenting with a new energy source. They have n energy modules lined up, each with an energy level represented as an integer in array A. To achieve a stable energy output, the scientists must find a module i where the total energy from the beginning of the line to i matches the total energy from i to the end.

If they find such a module, their energy reactor will be perfectly balanced. Help the scientists find this balancing module.

Input Format

The first line contains a single integer n, the number of energy modules.
The second line contains n integers,the energy levels of the modules.
Constraints

Output Format

If there exists a module that balances the energy, output an integer,the value of the balancer of the module also the index.
If there are multiple such modules, output the smallest index.
If no such module exists, output "UNSTABLE".
Sample Input 0

5
1 2 3 2 1
Sample Output 0

6 3
Sample Input 1

7
3 -2 1 2 -1 -1 2
Sample Output 1

1 2
*/