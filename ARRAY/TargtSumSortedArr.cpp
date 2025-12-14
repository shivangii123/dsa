// /*Target Sum Pairs

// Given a sorted array containing N distinct integers, and a target integer T,
// design an algorithm to count the number of pairs of integers in the given array
// whose sum is equal to T.
// arr[]=[ 1,2, 3, 4, 5, 6]  arr is sorted so we can use binary search , target=6 */

// #include<iostream>
// #include<vector>
// using namespace std;

// int targetSum(vector<int> &v, int T){
//     int l=0, r=v.size()-1 , cnt =0 ;
//     while(l<=r){
//         if(v[l]+v[r] == T){
//             cnt++ ;
//             l++ ; r--;
//         }
//         else if(v[l]+v[r] <T){
//             l++;
//         }
//         else{
//             r-- ;
//         }
//     }
//     return cnt ;
// }


// int main(){

//     int n; cout<<"Enter size : "; cin>>n ;
//     int T; cout<<"Enter Target : "; cin>>T ;


//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     cout<<"Ans is : " << targetSum(v, T);

//     return 0;
// }

/****M-2 using HASHMAP- unordered_map */

#include<unordered_map>
#include <iostream>
#include<vector>
using namespace std ;

vector<vector<int>> targetSum(vector<int> arr , int target ){
    unordered_map <int, int> mp;
    vector<vector<int>> res ;
    
    for(int i=0;i<arr.size(); i++){
        mp[arr[i]] = i ;
    }
    
    for(int i=0;i<arr.size(); i++){
        int el= target - arr[i];
        if(mp.find(el) != mp.end() && i < mp[el]){  // key(element) found
            res.push_back({ i,mp[el] }) ;
        }
    }
    return res ;
}

int main() {
    int n ; cout<<"Enter array size : "; cin>>n ;
    cout<<"Enetr n elements :" ;
    vector<int> arr(n);  // eg:-{2,7,11,15} ,Target= 9
    for(int i=0; i<n ;i++){
        cin>> arr[i];
    }
    int target; cout<<"enter target value :" ;cin>>target ;

    vector<vector<int>> ans =targetSum(arr, target);
    cout<<"ans is : "<<endl  ;
    for(int i=0;i<ans.size(); i++){
        cout<<"[" <<ans[i][0] <<"," <<ans[i][1] << "]" <<endl ;
    }
    return 0;
}