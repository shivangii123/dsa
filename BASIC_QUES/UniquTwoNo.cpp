#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter value of n :" ;
    cin>>n;
    int size=2*n+2;

    int arr[size];
    cout<<"Enter array elements :" ;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    

    return 0;
}