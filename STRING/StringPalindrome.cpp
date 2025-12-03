
#include<iostream>
#include<string>
using namespace std;

bool CheckPalndr(string s1,int n){
    for(int i=0;i<n/2 ;i++){
        if(s1[i]!=s1[n-1-i]){
            return false ;
        }
    }
    return true ;
}

int main(){

    string s1;
    cout<<"Enter string : ";
    cin>>s1;
    int n=s1.size();

    if(CheckPalndr){
        cout<<"Its a Palindrome !!"<<endl ;
    }
    else {
    cout<<"Not a Palaindrome "<<endl ;
    }
    return 0;
}