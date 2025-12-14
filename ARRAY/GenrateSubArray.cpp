#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter array size :" ;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements :" ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"[ ";
            for(int k=i;k<=j;k++){
            cout<<arr[k] ;
            
            (k<j)? cout<<", ": cout<<" ]"<< endl;
            }
        }
    }

    // int i=0;
    // for(int j=i;j<n;j++){
    //     cout<<"[ ";
    //     for(int k=i;k<=j;k++){
    //         cout<<arr[k];
    //         (k<j)? cout<<", ": cout<<" ]"<< endl;

    //     }
    // }
    // i++ ;

    return 0;
}