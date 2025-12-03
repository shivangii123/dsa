#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n ; cout<<"enter size : " ; cin>>n;

    priority_queue<int , vector<int>, greater<int>>mnheap ;//inbulit min heap 

    for(int i=0;i<n;i++){
        int x ;cin>>x;
        mnheap.push(x);
    }

    return 0;
}