#include<iostream>
using namespace std;

int fib(int n){
        if (n==0 || n==1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2);
        }
    }


int fibn(int num){
    int a=0;
    int b=1;
    int c=a+b;

    for(int i=2;i<=num;i++){
        c=a+b;
        a=b;
        b=c;
    }

    return c;
}

int main(){

    int num;
    cout<<"value of n :";
    cin>>num;

    // int ans=fib(num);
    // cout<<num<<"th fibonacci number is : " <<ans;

    int final =fibn(num);
    cout<<"so its "<< final;
    return 0;
}

