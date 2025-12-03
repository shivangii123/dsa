/* Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place
such that each unique element appears only once. The relative order of the elements should be
kept the same. Then return the number of unique elements in nums.*/

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int j=0;
        for(int i=1;i<n;i++){
            if (nums[i]!=nums[j]){
                j++;
                nums[j] =nums[i];
            }
        }
        return j+1;
    }

int main(){
    vector<int> nums={0,1,1,2,3,3};

    int k=removeDuplicates(nums);
    cout<<"\n OUTPUT ARRAY : [" ;

    for(int i=0;i<k;i++){
        cout<<nums[i]<< (i < k - 1 ? ", " : "");
    }
    cout<<"]" ;
    return 0;
}