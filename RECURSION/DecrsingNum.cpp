#include<iostream>
using namespace std;


void decrNum(int n){
    if(n==0) return ;
    cout<<n<<" " ;
    decrNum(n-1);
}

int main(){
    int n ; cout<<"Enter n : " ;
    cin>> n;

    decrNum(n) ;
    return 0;
}