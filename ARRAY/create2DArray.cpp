#include<iostream>
using namespace std;

int main(){

    int n, m; cout<<"Enter no of rows and col : ";
    cin>>n >>m ;

    int** arr =new int*[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"\nArray Elements are : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++ ){
        delete[] arr[i];// delete each row
    }
    delete[] arr ;// delete row pointers
    return 0;
}