#include<iostream>
#include<unordered_map>
#include<vector>
#include<limits>
#include<string>
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    char c;
    bool isEnd;
    int freq=0;

    // vector<node*> edges();
    // vector<node*> edges(26,nullptr);
    node*edges[26];


    node(char c){
        this->c= c;
        isEnd=false;
    }
};

class trie{
    public:
    node* root;

    trie(){
        root=new node('!');
    }

    void insert(string word){
        node* cur=root ;

        int i=-1; //root node is -1
        while(i!=word.size()){
            char x=word[i+1];
            if(cur->edges[x-'a']==nullptr){//curr ke edges mein 'x'postn par check karenge
                node* z=new node(x);
                cur->edges[x-'a']=z;
            }
            cur=cur->edges[x-'a'];
            i++;
        }
        cur->isEnd=true;
    }

    bool lookup(string word){
        node* cur=root ;

        int i=-1; //root node is -1
        while(i!=word.size()-1){
            char x=word[i+1];
            if(cur->edges[x-'a']==nullptr){//curr ke edges mein 'x'postn par check karenge
                return false;
            }
            cur=cur->edges[x-'a'];
            i++;
        }
        return cur->isEnd;
    }
    void erase(string word){
        node* cur=root ;

        int i=-1; //root node is -1
        while(i!= word.size()-1){
            char x=word[i+1];
            if(cur->edges[x-'a']==nullptr){//curr ke edges mein 'x'postn par check karenge
                return ;
            }
            cur=cur->edges[x-'a'];
            i++;
        }
        cur->isEnd=false;
    }
};


int main(){
    int n ;cin>>n;
    string words[n];
    trie  t;

    for(int i=0;i<n;i++){
    cin>>words[i];
    t.insert(words[i]);
    }

    int m; cin>>m;

    for(int i=0;i<m;i++){
        string q;
        cin>>q;
        cout<<t.lookup(q)<<endl;
    }
    return 0;
}