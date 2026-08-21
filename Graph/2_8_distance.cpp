#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];

void bfs(int src, int dest){
    
    queue<int> q;
    q.push(src);

    bool visits[1005];
    memset(visits, false, sizeof(visits));
    visits[src] = true;

    int levels[1005];
    memset(levels, -1, sizeof(levels));
    levels[src] = 0;

    int sum=0;
    int count=0;
    int max=INT_MIN;
    int min=INT_MAX;
    int odd=0;
    int even=0;
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout<<current<<" ";
        sum=sum+current;
        count++;
        if(current>max) max=current;
        if(current<min) min=current;
        if(current%2==0) even++;
        else odd++;

        for(auto node: v[current]){
            if(!visits[node]){
                q.push(node);
                visits[node] = true;
                levels[node] = levels[current]+1;
            }
        }
    }

    cout<<endl<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Count: "<<count<<endl;
    cout<<"Average: "<<(float)sum/count<<endl;
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Even: "<<even<<endl;
    cout<<endl;

    if(visits[dest]) cout<<"Path Exist: YES"<<endl;
    else cout<<"Path Exist: NO"<<endl;
    cout<<"Shortest Path: "<<levels[dest]<<endl;
}

int main(){
    
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src,dest; cin>>src>>dest;
    bfs(src, dest);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
sample input:
7 8
0 1
1 3
3 2
1 4
3 5
2 5
5 6
4 6
0
6

sample output:
0 1 3 4 2 5 6 

Sum: 21
Count: 7
Average: 3
Max: 6
Min: 0
Odd: 3
Even: 4

Path Exist: YES
Shortest Path: 3

*/