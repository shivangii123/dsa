#include<iostream>
using namespace std;

class node{
    int val;
    node * left, *right ;

    node(int v){
        val=v;
        left=nullptr;
        right=nullptr;
    }
};


bool search(node* root, int target){
    if(root ==nullptr){
        return false ;
    }

    if(root->val ==target){
        return true;
    }
    if(root->val >target && search(root->left , target)){
        return true ;
    }
    else if(root->val <target  && search(root->right ,target)){
        return true;
    }
}
int main(){
    
    return 0;
}