#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter how many elemnts:";
    cin>>n;
    

    cout<<"Enter elements:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // SWAP ELEMENTS
    int temp;
    for(int i=0;i<n/2;i++){
        // swap(arr[i], arr[n-i]);
        temp= arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }

    cout<<"Reverse array is :" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}