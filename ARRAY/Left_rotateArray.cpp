#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();

    int temp=arr[0];

    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    cout<<"Rotated Array is: [" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<(i < n-1 ? "," : "");
    }
    cout<<"]" ;
    return 0;
}