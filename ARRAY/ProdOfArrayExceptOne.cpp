#include<iostream>
using namespace std;

int main(){

    int n; cout<<"Enter size of array : " ;
    cin>>n ;

    int arr[n];
    int answer[n];

    for(int i=0;i<n;i++){ //array input
        cin>>arr[i];
    }

    /*** Method-1 Divide prod by each element -Won't work due memory overflow *********/
    // int prod=1;
    // for(int i=0;i<n;i++){
    //     prod *=arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     answer[i] =prod/arr[i] ;
    // }

    // for(int i=0;i<n;i++){//array output
    //     cout<<answer[i]<<" ";
    // }


    // /********* Method-2 Nested Loops  *********/
    // for(int i=0;i<n;i++){
    //     int prod=1 ;
    //     for (int j=0;j<n; j++){
    //         if(j==i){
    //             continue ;
    //         }
    //         else{
    //             prod *=arr[j];
    //         }
    //     }
    //     answer[i]=prod ;
    // }

    // for(int i=0;i<n;i++){//array output
    //     cout<<answer[i]<<" ";
    // }

    // Method-3 Using Prefix and Suffix
    int pref[n],suff[n];
    int m=1;
    for(int i=0;i<n;i++ ){ // we move to next value of 'i' and multiplin prod,store in pref array
        m *=arr[i];
        pref[i] =m;
    }


    int t=1;
    for(int i=n-1;i>0;i--){
        t *=arr[i];
        suff[i]=t ;
    }

    for(int i=0;i<n;i++){
        if(i==0){
            answer[i]=suff[i+1] ;
        }
        else if(i==n-1){
        answer[i]=pref[i-1] ;
        }
        else{
             answer[i]=pref[i-1] *suff[i+1] ;
        }
    }

    for(int i=0;i<n;i++){//array output
        cout<<answer[i]<<" ";
    }
    return 0;
}