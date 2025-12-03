#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number : " ;
    cin>>n ;
    cout<<n;
    
    int sum=0;
    // for(int i=n;i>=0;i=i/10){
        
    //     int d=n%10;
    //     sum+=d;
    // }

    int i=n;
    while(i>=0){
        int d=i%10;
        sum+=d;
        i=i/10;
    }

    cout<<"\nSum of digits is: " <<sum;
    return 0;
}