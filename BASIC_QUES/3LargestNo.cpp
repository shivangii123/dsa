#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter how many number :" ;
    cin>>n;
    int el,max=0;

    for(int i=0;i<n;i++){
        cin>>el;
        if(el>max){
            max=el;
        }
    }

    cout<<"largest element is :" <<max;
    return 0;
}