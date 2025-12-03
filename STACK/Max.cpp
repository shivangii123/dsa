#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){

    string s; cin>>s;
    queue<int>q;
    vector<int>freq[26,0];

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++ ;

        if(freq[s[i]])
    }
    return 0;
}