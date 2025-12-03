#include<iostream>
#include<vector>
using namespace std;

class bnrTree{
    public:
    int data ;
    bnrTree *left ,*right ;
    bnrTree(int data){
        this->data =data;
        this->left=nullptr;
        this->right=nullptr;

    } 

};

bnrTree* construct(vector<int> &sequence, int& i){
    bnrTree * x=new bnrTree(sequence[i]);
    i++ ;
    if(sequence[i]!= -1){
    x->left =construct(sequence, i);
    }

    i++ ;
    if(sequence[i]!= -1){
    x->right= construct(sequence,i);
    }
}

int main(){

    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int i=0;
bnrTree* root =construct(a, i);
cout<<root->left <<" " <<root ;
    return 0;
}