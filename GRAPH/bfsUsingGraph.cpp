#include<iostream>
#include<queue>
using namespace std;

void bfs(int rt, vector<vector<int>>&edges){
    vector<int> &vis(n,0);
    queue<int>q;
    q.push(rt);
    vis[rt]=1;

    while(q.size()>0){
        int i=q.front();
        q.pop();

        for(auto u:edges[i]){
            if (vis[u]==0){
                vis[u]=1;
                q.push(u);
            }
        }
    }
}

int main(){
    return 0;
}