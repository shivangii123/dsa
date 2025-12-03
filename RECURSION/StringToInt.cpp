#include<iostream>
using namespace std;

int generator(string s, int i){
    if(i==-1){ //when empty string1
        return 0;
    }
    // To convert Char/String  to integer do :-
    // s[3]-'0'  -> Ascii of 3- Ascii of 0 = 3 (Ascii of that no i.e '3')

    // cout<<generator(s,i-1)<<" "<<s[i]-'0' <<" "<<i<<endl ;
    int ans= s[i]-'0' +generator(s,i-1)* 10 ;
    return ans;


    // int s1=generator(s,)
}

int main(){
    string s ; cout<<"Enter string : ";
    cin>>s;

    cout<<generator(s,s.size()-1);


    return 0;
}

