#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n :" ;
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // arr[n]='\0'; can make last elemnt as NULL
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

    cout<<"printing array without for loop : " ;
    cout<<arr <<endl ; //arr name is char pointer that prints value until NULL

    cout<<"printing array using for loop : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


/*  Taking input without knowing size  */
// Reverse string without taking size :

//Below will not work ,it work for only some sysytem not everytime
// char* arr2;  //try this
// cout<<"Enter elements : " ;
// cin>>arr2;

// cout<<arr2;


//// Taking Input Using Array pointer without declaring size //////
// int n; cout<<"Enter size : ";
// cin>>n;
// char* arr3;

// for(int i=0;i<n;i++){
//     cin>>arr3[i];
// }
// cout<<arr3 ;


    return 0;
}