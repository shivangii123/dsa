#include<iostream>
using namespace std;

int fib(int n){
        if (n==0 || n==1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2) ;
        }
}

bool checkFib_no(int n){
    int ans;
    for(int i=0;i<=n;i++){
        ans=fib(i);
        
        if(ans==n){
            return true;
        }
    }
    return false ;
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(checkFib_no=='true'){
        cout<<"Yes";
    }
    else{
        cout<<"No " ;
    }
    return 0;
}