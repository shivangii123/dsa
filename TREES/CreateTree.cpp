#include<iostream>
#include<queue>
#include<vector>
using namespace std;


class treeNode{
    public:
    int data;
    treeNode *left , * right ;
    vector<treeNode*> childNodes;
    treeNode(int data){ // constructor
        this->data= data ;
    }

    void AddChild(treeNode* child){
        childNodes.push_back(child);
    }
};


void dfs(int i, vector<vector<int>> &edges , int pr){
    cout<<i <<endl ;
    for(int j=0;j<edges[i].size();j++){
        int k=edges[i][j]; // storing & checking ki next elem visited h ya nahi..
        if(k!=pr){ //then 'k' is valid otipon , should be explored
            dfs(k,edges,i);
        }
    }
}

void bfs(int root , vector<vector<int>>&edges , int n){
    queue<int> q;
    vector<int>vis(n+1, 0);// '1' based indexing
    q.push(root);
    while(!q.empty()){
        int i=q.front();
        q.pop();
        vis[i]=1;
        cout<<i<<" " ;
        for(int j=0;j<edges[i].size();j++){
            int k=edges[i][j];
            if(vis[k]==0){
                q.push(k);
            }
        }
    }
}
int main(){


    int n ;cout<<"Enter size : "; cin>>n;

    vector<vector<int>> edges(n+1); // '1' based indexing(node from 1 to n)

    for(int i=0;i<n-1;i++){ // total edges=n-1 ;
        int x, y;
        cin>>x>>y ;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    cout<<"DFS : ";
    dfs(1, edges, -1);
    cout<<"BFS : ";
    bfs(1, edges, 6);
    return 0;

}