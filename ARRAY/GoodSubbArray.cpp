//Good sub array: a subarray whose sum is divisible by N(no. of elements )

#include<iostream>
using namespace std;

//input :N= 6, arr=[1 6 5 2 4 3]  ,Output:4

int main(){

    int n; cout<<"\nEnter size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    // /******* Method-1 BRUTE FORCE:O(N^2) **********/
    // int sum;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     sum=0;
    //     for(int j=i;j<n;j++){
    //         sum +=arr[j] ;
    //         if(sum %n==0){
    //             count ++;
    //         }
    //     }
    // }

    // cout<<"\nTotal no. of good sub arrays are : "<< count<<endl ;


    /******** Method-2 OPTIMIZED APPROACH :O(N) **********/

    int mod[n] ,freq[n]={0}; //freq of mod values(0 to n-1)
    
    int sum=0,ans=0 ;
    freq[0]=1; //initially sum=0,par modulo zero hoga usko count karne ke liye
    for(int i=0;i<n;i++){
        
        sum +=arr[i];
        int m= (sum%n) ;
        mod[i]= m ;
        
        ans +=freq[m] ; //uss modulo 'm' ki freq ko ans mein add karo
        freq[m]++ ; //freq of modulo ko increment

    }

    // for(int i=0;i<n;i++){
    //     cout<<freq[i]<<" " ;
    // }
    cout<<"\nTotal no.of Good Sub-Arrays : " <<ans ;

    return 0;
}