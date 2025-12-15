/* Given an integer array. arrange the elements of the array to form the biggest number.  
Input   
54  546  548  60  
Output : 6054854654  
Input   
98 9 78 7  
Output : 998787  
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    /*********** T.C ->O(nlogn)***********/

bool compare (int a, int b ){
    string s1=to_string(a)+ to_string(b);
    string s2=to_string(b)+ to_string(a);

    return (s1>s2) ;

}
string LargestNo(vector<int> &nums ){
    sort(nums.begin(),nums.end(), compare);//1-> sort
    /* sort-> T.C: O(nlogn)  , sare pairs check karke sort hoga */

    // 2-> check if first Elm is 0-> all are zeroes
    if(nums[0]==0 ){
        return "0"  ;
    }
    // 3->Concatenate to form result string
    string res="" ;
    for(int el:nums){
        res +=to_string(el);
    }

    return res ;
}

int main(){

    int n ;
    cout<<"Enter array size : ";
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<"Ans is : "<<LargestNo(nums);
    return 0;
}