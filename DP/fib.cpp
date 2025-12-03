#include<iostream>
using namespace std;

int f( int n){
    if(n<=1) return n ;
    return f(n-1) + f(n-2);
}
int main(){
    int num ;
    cout<<"Enter no." ;  cin>>num ;
    cout<<f(num);

    return 0;
}