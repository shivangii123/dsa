/* Given integer array nums sorted in ascending order, remove some duplicates such that each unique element appears
at most twice.Return k after placing the final result in the first k slots of nums.Do not allocate extra space for another array.
*/
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n <= 2) return n;  // if the size is 2 or less, no need to remove duplicates
    
    int j = 2;  // start from index 2 ,AS first two elements can always remain
    for (int i = 2; i < n; i++) {
        // Compare the current element with the element at index `j-2`
        // If nums[i] is not equal to nums[j-2], it means it's safe to include it
        if (nums[i] != nums[j - 2]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main(){
    vector<int> nums={1,1,1,2,3,3};

    int k=removeDuplicates(nums);
    cout<<"\n OUTPUT ARRAY : [" ;

    for(int i=0;i<k;i++){
        cout<<nums[i]<< (i < k - 1 ? ", " : "");
    }
    cout<<"]" ;
}
