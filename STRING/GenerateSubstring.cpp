#include<iostream>
using namespace std;

int main(){

    string s;
    cout<<"Enter string : " ; getline(cin, s);

    // for(int i=0;i<s.size();i++){
    //     for(int j=i;j<s.size();j++){
    //         cout<<s.substr(i,j-i+1)<<" "; // ans:- 12  123(no spaces)
    //     }
    //     cout<<endl;
    // }


    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            for(int k=i;k<=j;k++){
                cout<<s[k]<<" , ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    
    return 0;

}