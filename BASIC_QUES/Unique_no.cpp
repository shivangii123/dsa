#include<iostream>
using namespace std;

int main(){


    int n;
    cout<<"No.of element" ;

    cin>>n;
    int el;

    int ans=0;
    for(int i=0;i<n;i++){
        cin>>el;
        ans=ans ^el ;
    }

    cout<<endl<<"Unique no. is :" <<  ans;
    return 0;
}