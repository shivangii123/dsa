#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"enter value for x: ";
    cin>>x;

    switch(x){
        case 2:
            cout<<"X is two "<<endl ;break;
        case 4:
            cout<< "x is four" <<endl; break;
        case 6:
        cout<< "x is six"<<endl ; break;
        default:
        cout<<" has different value "<<endl;
    }
    return 0;
}