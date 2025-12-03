#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void revArr(string &s){
    stack<char>stk ;

    for(int i=0;i<s.size();i++){//pushing elm in stack
        stk.push(s[i]);
    }
    int i=0 ;
    while(!stk.empty()){
        s[i++]= stk.top();
        stk.pop();
    }
}

int main(){
    string s;
    cout<<"Enter string : "; cin>> s;
    revArr(s);
    cout<<"Now reversed string is : ";
    // for(int i=0;i<n ; i++){
    //     cout<<s[i] <<" ";
    // }
    cout<< s;

    return 0;
}