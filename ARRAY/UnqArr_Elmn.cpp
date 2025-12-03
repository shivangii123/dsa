// Unique element in an array where all elements occur k times except one

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/**** BRUTE FORCE -> O(nlogn) ******/
int UniqElm(vector<int>&v2 , int k){
    
    sort(v2.begin(), v2.end()); // sort array , T.C-> O(logn)

    for(int i=0;i<v2.size();i+=k){            // T.C-> O(n)
        if( (i+k-1) >=v2.size() || (v2[i]!= v2[i+k-1]) ){
            return v2[i];  //unique elem
        }
    }
    return -1 ; // no uniqe elem
}

int main(){

    int n ; cout<<"enter size : " ; cin>>n ;
    vector<int> v2;
    cout<<"Enter elements : ";
    
    for(int i=0; i<n ;i++){
        int a; cin>>a;
        v2.push_back(a);
    }

    int k; cout<<"Enter k : " ; cin>>k ;
    if(UniqElm(v2, k) ==-1){
        cout<<"There is no unique element " ;
    }
    else{
        cout<<"Unique element is : "<<UniqElm(v2,k);
    }

    return 0;
}