
// #include<iostream>
// using namespace std;

// int main(){
//     int n; cout<<"enter n : ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     /***********BRUTE- FORCE ************ */

//     int ans=INT8_MIN , currsum=INT8_MIN;

//     for(int i=0;i<n;i++){
//         currsum =0;
//         for(int j=i;j<n;j++){
//             currsum +=arr[i];
//             ans=max(currsum, ans);
//         }
//     }

//     cout<<"Max sum is : "<<ans<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
 /*********** OPTIMAL- USING KADANE'S ALGO******** */
 //NOTE:**** when all elements are negative->> we initialize to Arr[0], upon negatie sum-> arr[i]


int maxSubarrSum(vector<int> &nums ){
    int ans=0  , sum =0 , j=0 , start =-1,end=-1;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    
        if(sum>ans){
            ans =sum ;
            start =j ;
            end = i ;
        }

        if(sum<0){
            sum =nums[i];
            j=i; // it wiil not be i+1 , else we miss checking that elem, specly for all negativ elm case
        }
    }

    cout<<"Sub array is : "<<"[ ";
    for (int i = start; i <=end; i++){
        cout<<nums[i]<<" " ;
    }
    cout<<"]";
    return ans ;
}

int main(){
    int n , el; cout<<"enter size : "; cin>>n;
    vector<int> nums;

    for(int i=0;i<n;i++){
        cin>>el ;
        nums.push_back(el);
    }

    cout<<"Maximum sum of Subarray is : "<<maxSubarrSum (nums);


    return 0;
}