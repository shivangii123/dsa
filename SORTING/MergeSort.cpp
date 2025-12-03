#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int l,int r){
    vector<int>h(r-l+1); //helper array to merge 2 sorted array
    int m=(l+r)/2;
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r){//anyone arr reach its limit
        
    }
}

void MergeSort(vector<int>& arr, int l,int r){
    if(l==r){// when one elemnt left
        return ;
    }
    int m=(l+r)/2;
    MergeSort(arr,l,m);
    MergeSort(arr,m+1,r);
    merge(arr,l,r);
    // cout<<l<<" "<<r<<endl;   // FOR Dry-Run
    // for(int j=l;j<r;j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<endl ;
}

int main(){

    int n; cout<<"enter size : ";
    cin>>n;

    
    return 0;
}