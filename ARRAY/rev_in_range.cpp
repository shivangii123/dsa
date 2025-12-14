
#include<iostream>
using namespace std;

int main(){

    int n; cout<<"Enter size : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){  //input
        cin>>arr[i];
    }

    int i,j ,temp=0;
    cout<<"Enter start and end index : ";
    cin>>i>>j ;

    while(i<=j){
        temp =arr[i];   // use swap func: swap(arr[i],arr[j])
        arr[i]=arr[j];
        arr[j]=temp ;
        i++ ;
        j-- ;
    }

    cout<<"Array after reverse in range is : ";
    for(int i=0;i<n;i++){ //Output
        cout<<arr[i]<<" ";
    }

    return 0;
}