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

    while(s<=e){
        int mid=(s+e)/2;
        if(T==arr[mid]){
            ans= mid; //now e moe to RIGHT SIDE
            s=mid+1 ;// update e(search space)
        }
        else if(T>arr[mid]){
            s=mid+1;
        }
        else if(T<arr[mid]){
            e=mid-1;
        }

    }

    cout<<"ans is : "<<ans;
    return 0;
}