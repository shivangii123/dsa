#include<iostream>
using namespace std;

int main(){

    string s;
    cout<<"Enter string : " ;
    getline(cin,s);
    bool ans=true;

    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
    //         i++;
    //     }
    //     else{
    //         ans=false;
    //         break;
    //     }
    // }
    //or
    for(int i=0;i<s.size();i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!=' '){
            ans=false ;
        }
    }

    (ans)?cout<<"Good string ": cout<<"Bad string " ;
    return 0;
}