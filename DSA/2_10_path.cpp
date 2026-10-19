#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int src, int dest){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    parent[src] = -1;

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

        for(auto i:a[current]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
                level[i]=level[current]+1;
                parent[i]=current;
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

    if(visited[dest]) cout<<"Path Exist: YES"<<endl;
    else cout<<"Path Exist: NO"<<endl;
    cout<<"Shortest Distance: "<<level[dest]<<endl;

    if(visited[dest]){
        vector<int> path;
        int current=dest;
        while(current!=-1){
            path.push_back(current);
            current=parent[current];
        }
        reverse(path.begin(), path.end());
        cout<<"Shortest Paths: ";
        for(auto i:path){
            cout<<i<<" ";
        }
        cout<<endl;
    } 
}

int main(){
    
    // input
    int n,e; cin>>n>>e;

    // process
    while(e--){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    int src,dest; cin>>src>>dest;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
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
Shortest Paths: 0 1 4 6 

*/