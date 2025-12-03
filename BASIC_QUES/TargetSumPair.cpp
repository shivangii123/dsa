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

    int l=0,r=n-1,count=0;
    cout<<"Enter target value :" ;
    cin>>T;

    while(l<r){
        if(arr[l]+arr[r]==T){
            count++;
            l++;
            r-- ;
        }
        else if(arr[l]+arr[r]>T){
            r-- ;
        }
        else{
            l++ ;
        }
    }
    
    cout<<"Total pairs are : "<<count<<endl;
    return 0;
}