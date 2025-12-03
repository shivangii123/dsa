#include<iostream>
#include<vector>
using namespace std;

void dfs(int i, vector<int>& vis, vector<vector<int>>&edges){
    vis[i]=1;
    for(auto u:edges[i]){
        if(vis[u]==0){
            dfs(u,vis,edges);
        }
    }
    vis[i]=0;

    // vis[i]=0 //optional depends upon question// to make it unvisited
}

int main(){
    cout<<dfs(5);

    return 0;
}
