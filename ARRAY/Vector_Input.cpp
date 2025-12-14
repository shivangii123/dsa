#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n ; cout<<"Enter arr size : " ; cin>>n;
    
    //  M-1 take input in vector USING->INDEXING ...
    vector<int> v(n) ;//when declaring Vector size->> NEVER USE PUSH_BACK()
    for(int i=0;i>n;i++){
        cin>>v[i]; // using INDEXING to take input
    }

    ///// M-2  TAKING INPUT IN VECTOR ,WHEN WE DON'T KNOW SIZE///////
    cout<<"Enter elements : ";
    vector<int> v2;
    int x;
    while(cin>>x && x!= -1){ //User Enter "-1" to stop input
        v2.push_back(x);
    }

    for(auto el :v2){ //OUTPUT ARRY ELEMENTS
        cout<<el<<" " ;
    }

    return 0;
}