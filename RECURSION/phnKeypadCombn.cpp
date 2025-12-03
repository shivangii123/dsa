#include<iostream>
#include<vector>
using namespace std;

vector<string> mapping= {".", "abc", "def" , "ghi", "jkl","mno","pqrs","tu","vwx","yz"};


void lettrCombn(string s , string newstr , int i, vector<string> &ans){
    if(i== s.size()){
        // cout<<newstr<<" " ; // print karo ya vector mein store karke main() mein print
        ans.push_back(newstr);
        return ;
    }

    string elm = mapping[s[i]-'0'];

    for( char alpha :elm){
        newstr.push_back(alpha) ;// char add karo
        lettrCombn(s,newstr , i+1, ans);
        newstr.pop_back();   // backtrack -UNDO
    }
}

int main(){

    string s ;
    cout<<"Enter string : " ; cin>>s ;

    vector<string> ans ;

    lettrCombn(s, "",0, ans) ;

    for(string x : ans){
        cout<<x<<" ";
    }
    return 0;
}