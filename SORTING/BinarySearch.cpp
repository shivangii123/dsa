#include<iostream>
using namespace std;

int main(){

    int n,T;
    cout<<"enter array size :" ;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements :" ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0,e=n-1,ans=-1;
    cout<<"Enter target value :" ;
    cin>>T;

    while(s>=e){
        int mid=(s+e)/2;
        if(mid==T){
            ans= mid; //now e moe to LEFT SIDE
            e=mid-1 ;// update e(search space)
        }
        else if(T>mid){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return 0;
}