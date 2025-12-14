#include<iostream>
#include<vector>
using namespace std;

int main(){

    int l1 =0 , l2=0, l3=0 ;

    int n; cout<<"enter array size : "; cin>>n;
    // int arr[n];

    vector<int> arr(n);
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>l1){
            l3=l2 ;
            l2=l1;
            l1=arr[i] ;
        }
        // else if(arr[i]<=l1 && arr[i]>l2){
            else if(arr[i]>l2){
            l3=l2;
            l2=arr[i];
        }
        // else if (arr[i]<=l2 &&arr[i]>l3){
            else if (arr[i]>l3)
            l3=arr[i] ;
        }

    cout<<"3 Largest numbers are : "<<l1<<" "<<l2<<" "<<l3<<endl ;
    return 0;
}