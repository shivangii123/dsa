#include<iostream>
using namespace std;

int main(){

    int n; cout<<"Enter no. of buildings : " ;
    cin>>n ;
    int arr[n],pref[n],suff[n];

    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    // int m=1;
    // for(int i=0;i<n;i++){
    //     m *=arr[i];
    //     pref[i]=m ;
    // }

    // int t=1;
    // for(int i=n;i>0;i--){
    //     t *=arr[i];
    //     suff[i]=m;
    // } 0 1 0 2 1 0 1 3 2 1 2 1
    
    int max1=0,count=0 ;
    for(int i=0;i<n;i++){
        pref[i]=max(max1,arr[i]) ;
        max1 =pref[i] ;
    }
    cout<<"\nprefix array is : " ;
    for(int i=0;i<n;i++){
        cout <<pref[i] ;
    }

    int max2=0;
    for(int i=n-1;i>=0;i--){
        suff[i]=max(max2,arr[i]) ;
        max2 =suff[i] ;
    }
    cout<<"\nsuffix array is : " ;
    for(int i=0;i<n;i++){
        cout <<suff[i] ;
    }


    for(int i=0;i<n;i++){
        count += (min(pref[i],suff[i]) -arr[i]);
    }

    cout<<"\nTotal water that can be traped is : " <<count <<endl;

    return 0;
}