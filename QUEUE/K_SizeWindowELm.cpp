//To print all numbers of every window of a given size k in an array
//prtElm_EachWind_sz-K , arr= 1,2,3,4,5,6,7

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void display(queue<int> q){ // Queue-> pass by value ,
        while(!q.empty()){  // so jo queue empty hogi not reflected
        cout<<q.front()<< " ";
        q.pop() ;
    }
    cout<<endl ;
}

void printElm(vector<int> &arr, int k){
    if(k<0 || k>arr.size() ){
        cout<<"\nInvalid window size !!" ;
        return ;
    }
    queue<int> q;
    for(int i=0;i<k-1 ; i++){// initial queue ready
        q.push(arr[i]);
    }

    for(int i =k-1; i<arr.size();i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

}

int main(){
    int n; cout<<"\nEnter array size : " ; cin>> n;
    int k; cout<<"\nEnter k : " ; cin>> k ;

    cout<<"\nEnter the elements : ";
    vector<int> arr(n);
    for(int i=0;i<n; i++){
        cin>> arr[i] ;
    }
    
    printElm(arr, k);
    return 0;
}