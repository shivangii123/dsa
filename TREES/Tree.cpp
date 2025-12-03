#include<iostream>
#include<queue>
#include<vector>
using namespace std;

/**********M-1 craeting trees using 2d vector and pushing values*****************/
class treeNode{
    public:
        int data;
        vector<treeNode*> childNodes;


    treeNode(int data){ // constructor
        this->data= data ;
    }

    void AddChild(treeNode* child){
        childNodes.push_back(child);
    }
};

int main(){
    int n ;cout<<"Enter size : "; cin>>n;

    vector<vector<int>> edges(n+1); // '1' based indexing(node from 1 to n)

    for(int i=0;i<n-1;i++){ // total edges=n-1 ;
        int x, y;
        cin>>x>>y ;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    return 0;
}