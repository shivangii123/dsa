#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans(n,-1);

    int mx= arr[n-1];

    for(int i=n-2; i>=0;i++){
        if(arr[i]<mx){
            ans[i]= mx;
        }
        else{
            ans[i]= -1 ;
        }
    }
    return 0;
}