// Length of longest Good Substring-> A substring with only Vowels
#include<iostream>
using namespace std;

int main(){
    string s, str="", ans_str="";
    int cnt=0, ans=0;
    cout<<"Enter string : " ; cin>>s ;

    for(int i=0;i<s.size();i++){
        char ch=tolower(s[i]);// Handle uppercase characters
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            cnt++;
            str+= s[i];
            if(cnt>ans){
                ans=cnt;
                ans_str=str;//max()->lexogrphicly largst strg dekhega not Length wise
            }
        }
        else{
            cnt=0;
            str="";
        }

    }
    cout<<"Length of Longest Substring : "<<ans<<endl;
    cout<<"Longest Substring is : "<<ans_str<<endl ;

    return 0;
}