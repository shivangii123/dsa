#include<iostream>
using namespace std;

int main(){

    int n,k;
    cout<<"Enter n and k:";
    cin>>n>> k;

    int arr[n];
    cout<<"Enter elements :" ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int j=0;j<k;j++){  // time complxity=O(n^2)
        int temp=arr[n-1];

        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }

    cout<<"Rotated Array is :" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}