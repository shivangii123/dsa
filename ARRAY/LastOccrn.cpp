#include<iostream>
using namespace std;

int main(){
    int n,el,ans=-1 ;
    cout<<"\nhow many elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements : " ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter element to search : ";
    cin>> el;

    for(int i=n;i>0;i--){ //linaer Search O(N)
        if (el==arr[i]){
            ans=i;
            break;
        }
    }
    cout<<ans;
    
    return 0;
}