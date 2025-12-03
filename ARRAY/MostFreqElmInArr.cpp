// // // FIND MOST FREQUENT ELEMENT IN ARARY
// // #include<iostream>
// // #include<vector>
// // #include<algorithm>
// // using namespace std;

// // int main(){
// // //{4,4,4,0,1,2,4,0,4,3,2,3,2,2}

// //     int n ;cout<<"Enter size : "; cin>>n;

// //     vector<int> arr(n);

// //     for(int i=0;i<n;i++){
// //         cin>>arr[i] ;
// //     }

// //     // M-1 sort, then cnt freq :  T.C-> (nlogn +n = O(nlogn) )
// //     sort(arr.begin(),arr.end());

// //     int  mxLen=0 , ans =-1, cnt=1;
// //     for(int i=1;i<n;i++){
// //         if(arr[i] ==arr[i-1]){
// //             cnt++;
// //         }
// //         else{
// //             cnt=1 ;
// //         }
// //         if(cnt >mxLen ){
// //             mxLen= cnt ;
// //             ans =arr[i] ;
// //         }
// //     }

// //     cout<<"Max freq is : " <<ans ;

// //     return 0;
// // }


   /******** M-2 Use Hash Map : T.C-> O(n) ********/

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// int mostfreq(vector<int> &nums){
//     unordered_map<int, int> freq ;

//     //Step 1: freq map, count frequency
//     for( int el:nums){
//         freq[el]++ ;
//     }

//     //Step-2:find elment with maximum freq
//     int mxcnt=0, freqElm=nums[0] ;
//     for(auto entry :freq){
//         if(entry.second >mxcnt){
//             mxcnt= entry.second;
//             freqElm=entry.first;
//         }
//     }
//     return freqElm ;
// }

// int main(){

//     int n ;cout<<"Enter size : "; cin>>n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i] ;
//     }

//     cout<<"Most freq elm : "<<mostfreq (arr) ;

//     return 0;
// }

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

pair<vector<int> , int> mostfreq(vector<int> &nums){
    unordered_map<int, int> freqMap ;

    //Step 1: freq map, count frequency
    int mxcnt=0 ;
    for( int el:nums){
        freqMap[el]++ ;
        mxcnt=max(mxcnt, freqMap[el]);

    }

    //Step-2:find elment(s) with maximum freq with multiple elements with max freq
    vector<int> elements ;
    for(auto &entry :freqMap){
        if(entry.second == mxcnt){
            elements.push_back(entry.first);
        }
    }
    return {elements , mxcnt } ;
}

int main(){

    int n ;cout<<"Enter size : "; cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    cout<<"Most freq elm : ";
    pair <vector<int> , int > ans=mostfreq(arr);
    for(auto i :ans.first){
        cout<<i <<" " ;
    }
    cout<<"\nFrequency is : "<<ans.second <<endl;

    return 0;
}