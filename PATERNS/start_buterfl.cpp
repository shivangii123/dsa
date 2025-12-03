#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i<=((n+1)/2) ){
            for(int j=1;j<=i;j++){
                cout<<"*" ;
            }

            for(int k=0; k<(n-2*i); k++){
                cout<<" " ;
            }
            for(int j=1;j<=i;j++){
                cout<<"*" ;
            }
            cout<<endl;
        }
        if(i>(n/2)){
            for(int j)
        }
    }
    
    return 0;
}