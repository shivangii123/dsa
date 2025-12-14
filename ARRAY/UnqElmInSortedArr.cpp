// Print all unique elements present in a sorted array
// nums= [1, 1,1, 2, 2, 3, 4, 4, 4, 5, 5,6],or  [1,1,1,1,1,1] or [1, 1, 2, 2]

#include<iostream>
#include<vector>
using namespace std;

void unqEl(vector<int>&nums ){

    int i=0;
    while(i<nums.size() ){
        int curr = nums[i] ;// storing New unique element
        int cnt=0;

        while(i<nums.size() && nums[i]==curr){
            cnt++ ;
            i++ ;
        }
        if(cnt==1){
            cout<<curr <<" " ;
        }
    }
}

int main(){
    int n; cout<<"enter size : "; cin>> n ;

    vector<int>v(n);
    for(int i= 0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Unique elements are : ";
    unqEl(v);
    return 0;
}