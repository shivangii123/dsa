#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    // string s;
    // getline(cin,s);
    // cout<<"your string is : " << s;

    string s1="hello";
    string s2="world";

    // s1=s1+"," +s2 ;
    // cout<<s1 <<endl ;


    // if(s1>s2){
    //     cout<<"true"<<endl ;
    // }
    // else{
    //     cout<<"false"<<endl ;
    // }
// // FIND A CHARACTER IN A STRING
//     cout<<s1.find('l') <<endl;

// // SUB-STRING
// cout<<s1.substr(1,3)<<endl;

//REVERSE A STRING
reverse(s1.begin()+1,s1.end()-1) ; //reversing substrin ,ans-> hlleo
//s1.end() -last char ke baad ka address ,in this eg :- 'e' ke baad ka addr

cout<<s1<<endl ;
    

    // sort(s1.begin(),s1.end()) ;
    // cout<<s1<<endl ;


    // //method -1 to reverse sort
    // sort(s1.begin(),s1.end()) ;
    // reverse(s1.begin(),s1.end());
    // cout<<s1 <<endl ;

    // // method-2
    // sort(s1.rbegin(),s1.rend()) ;  //begin() and end() are string functions
    // cout<<s1<<endl;

    // //
    // string str1[4]={"abc","dd","ee","oo"} ;
    // sort(str1,str1 +4); //here its normal array ,so don't use begin(),end()
    // for(int i=0;i<4;i++){
    //     cout<<str1[i]<<" " ;
    // }
}