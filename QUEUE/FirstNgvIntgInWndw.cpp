// // Print First Negative integer in every Window of size- k
/*** M-1 : T.C= O(N) ***/  //2 -3 -4 -2 7 8 9 -10 , 1 2 -3 4 5
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void firstNegvElm(vector<int> &arr, int k){
    if(k<0 ||k> arr.size()){
        cout<<"invalid window size !! " ;
        return ;
    }
    queue<int> q;
    for(int i=0;i<k-1; i++){ // initial queue created
        if(arr[i]< 0){
            q.push(i) ;
        }
    }
    vector<int> ans;
    ans.reserve(arr.size()- k +1);

    for(int i=k-1;i<arr.size();i++){
        if(arr[i]<0){
            q.push(i);
        }
        // display(q);
        if(q.empty()){
            ans.push_back(0) ;
        }
        else{
            ans.push_back(arr[q.front()] ) ;}

        if(!q.empty() && q.front() == i-k+1){
            q.pop();
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i] <<" ";
    }
}



int main(){
    int n ;cout<<"Enter n : " ; cin >> n ;
    int k ;cout<<"Enter k : " ; cin >> k ;

    cout<<"Enter the elements : ";
    vector<int> arr(n);
    for(int i =0 ; i< n ; i++){
        cin>> arr[i] ;
    }
    firstNegvElm(arr, k) ;

    return 0;
}