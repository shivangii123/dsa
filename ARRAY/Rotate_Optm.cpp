#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,k;
    cout<<"Enter n and k:";
    cin>>n>> k;

    k=k%n;
    vector<int> arr(n);
    cout<<"Enter elements :" ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // for(int j=0;j<k;j++){  // time complxity=O(n^2)
    //     int temp=arr[n-1];

    //     for(int i=n-1;i>0;i--){
    //         arr[i]=arr[i-1];
    //     }
    //     arr[0]=temp;
    // }

    // int key=k%n;
    // for(int i=0;i<n;i++){
    //     if((i+k)<n){
    //         arr[i+k]=arr[i];
    //     }
    //     else{
    //         arr[n-1]=arr[i];
    //     }
    // }

    int i=0;
    int j=n-1-k;
    while(i<=j){
        swap(arr[i],arr[j]);//reverse n-k elements
        i++;
        j--;
    }

    i=n-k;
    j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);//reverse last k elements
        i++;
        j--;
    }

    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);//reverse entire array
    }

    cout<<"\nRotated Array is :" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}