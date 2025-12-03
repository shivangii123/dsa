#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    cout<<"\nLength of array is:" <<n;
    int d;
    cout<<"\nEnter the places(K) you want to rotate array with:";
    cin>> d;
    d=d%n ;

    int temp[d]={};   //temporary array
    /******* METHOD-1 (Tempry array>>Shifting>>put back elements)******/
    // for(int i=0;i<d;i++){
    //     temp[i]=arr[i];
    // }

    // for(int i=0;i<n-d;i++){ //shifting elements
    //     arr[i]=arr[i+d];
    // }

    // for(int i=0;i<d;i++){ //elements temp arr se back to array
    //     arr[n-d+i]=temp[i];
    // }
/////////////////*****************/
    /*******Method-2(Reverse 'n-d' elements and then 'd' elements)******/
    int j=0;
        for(int i=d;i<n;i++){
            temp[j]=arr[i];
            j++ ;
        }
        for(int i=0;i<d;i++){
            temp[j]=arr[i];
            j++;
        }
        for(int i=0;i<j;i++){
            arr[i]=temp[i];
        }
///////////////////
    cout<<"Rotated Array is: [ ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<(i<n-1 ?"," :"");
    }
    cout<< "]" ;

    return 0;
}