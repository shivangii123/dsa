#include<iostream>
#include<vector>
using namespace std;

int sumArr(vector<int>arr, int n ){
    if (n == 0 ){
        return arr[0] ;
    }
        return arr[n] + sumArr(arr, n-1) ;
}

int main(){
    int n ;
    cout<< "Enter n : ";
    cin>>n ;

    vector<int> arr(n);
    cout<<"Enter elements : ";
    for(int i=0;i<n ; i++){
        cin>>arr[i] ;
    }

    cout<< sumArr(arr, n-1) ;

    return 0;
}

int func1(int * b){
    cout<< b;
}
int num =10 ;
func(&num);

vs
int func2(int *a){
    cout<<"hello " ;
}
int arr= {1,2,3};
func2(arr);

int func2(int a[]){
    cout<<"hello " ;
}
int arr= {1,2,3};
func2(arr);
