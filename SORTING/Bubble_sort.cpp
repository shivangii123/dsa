#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter how many elements :";
    cin>>n;

    cout<<"Enter elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}