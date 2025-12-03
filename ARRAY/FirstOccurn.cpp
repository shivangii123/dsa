
#include<iostream>
using namespace std;

int main(){

    int n; cout<<"Enter array size : " ; cin>>n;
    int T; cout<<"Enter Target element : "; cin>>T;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int i=0, j=n-1;
    int ans= -1;

    while(i<=j){
        int mid=((i+j)/2) ;
        if(arr[mid]==T){
            ans =mid ;
            j=mid+1 ;
        }
        else if(T >arr[mid]){
            i=mid+1 ;
        }
        else{
            j= mid-1;
        }
    }

    cout<<"First occurence of "<<T<<" is : " <<ans <<endl ;
    return 0;
}