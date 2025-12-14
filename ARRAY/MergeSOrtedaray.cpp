// #include<iostream>
// using namespace std;

// int main(){

//     /*******USING EXTRA ARRAY SPACE ********/

//     int n,m,T;
//     cout<<"enter array 1 size : " ; cin>>n;
//     cout<<"enter array 2 size :" ;  cin>> m;

//     int arr1[n];
//     cout<<"Enter array1 elements :" ;
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }

//     int arr2[m]; int arr3[n+m];
//     cout<<"Enter array2 elements :" ;
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }

//     int i=0, j=0 , k=0;
//     while(i<n && j<m){
//         if(arr1[i] <=arr2[j]){
//             arr3[k++]=arr1[i++];
//         }
//         else{
//             arr3[k++]=arr2[j++];
//         }
//     }

//     while(i<n){
//             arr3[k++]=arr1[i++];
//         }
    
//     while(j<m){
//             arr3[k++]=arr2[j++];
//         }

//     cout<<" Merged sorted array is :" ;
//     for(int i=0;i<n+m;i++){
//         cout<<arr3[i] <<" ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){

    int m,n,T;
    cout<<"enter array 1 size : " ; cin>>m;
    cout<<"enter array 2 size :" ;  cin>> n;

    int arr1[m+n]={0} , arr2[n] ;

    cout<<"Element of array 1: ";
    for(int i=0;i<m;i++){
        cin>>arr1[i] ;
    }
    cout<<"arary 1 is : " ;
    for(int i=0;i<m+n;i++){
        cout<<arr1[i]<<" " ;
    }

    cout<<"Enter array2 elements :" ;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    int i=m-1 , j=n-1 ;
    for(int k=m+n-1 ;k>=0 ; k--){
        while(i>=0 && j>=0){
            if(arr1[i]>=arr2[j]){
                arr1[k]=arr1[i];
                i-- ;
            }
            else{
                arr1[k]=arr2[j];
                j-- ;
            }
        }
        while(i>=0){
            arr1[k--]=arr1[i--];
        }
        while(j>=0){
            arr1[k--]=arr2[j--];
        }
    }

    cout<<"Merged sorted array is : ";
    for(int i=0;i<n+m ;i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}