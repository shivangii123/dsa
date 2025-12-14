#include<iostream>
using namespace std;

int main(){

    int n; cout<<"Enter  : " ;
    cin>>n;
    int stalls[n]={10,1,2,7,5};
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }

    int n=sizeof(stalls)/sizeof(int);


    return 0;
}