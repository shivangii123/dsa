#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"ENTER A STRING : ";
    getline(cin,str);
    int n=str.size() ;
/*******   METH0D-1 (O(N^3)) */
    for(int i=0;i<n;i++){
        for(int j=0;j+i<n;j++){
            for(int k=j;k<=j+i;k++){
                cout<<str[k]<<"";
            }
            cout<<", " ;
        }
        cout<<endl;
    }

    /*****  METHOD-2(SUBSTR() FUNC ->O(N^3)) */
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j+i<n;j++){
            cout<<str.substr(j,i+1)<<" ";
        }
        cout<<endl ;
    }
    return 0;
}