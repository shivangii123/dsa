#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int n; cout<<"Enter sie of chararcter array : ";
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]='\0' ;//Last element NULL

    //To print CHARCTER ARRAY elements
    //Method-1 Iterate over the arr elements


    //Method-2 Name of array ,which is a Pointer

    cout<<arr;

    //Method-1 Inbuild func to find len of arr
    cout<<endl<<"\n len is  "<<strlen(arr);

    //Method-2 use count variable
    // int count=0;
    // for (int i = 0; i <n; i++) {
    //     if(arr[i])
    //     count++;
    // }
    int i=0, count=0;
    while(arr[i]!='\0'){
        i++; count++;
    }
    cout<<"\nLength is : "<<count ;
    
    return 0;
}