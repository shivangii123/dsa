/* given integer array nums and an integer k.
In one operation, you can choose an index of nums and increment the element at
that index by 1.Return the maximum possible frequency of an element after
performing at most k operations.

eg 1: nums = [1,4,8,13], k = 5  output: 2(highest freq)
Explanation: There are multiple optimal solutions:
- Increment the first element three times = [4,4,8,13]. 4 has a frequency of 2.
- Increment the second element four times = [1,8,8,13]. 8 has a frequency of 2.
- Increment the third element five times = [1,4,13,13]. 13 has a frequency of 2.
eg 2: nums = [3,9,6], k = 2   -->> Output: 1   */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxFrequency(vector<int> nums, int k){
    
    sort(nums.begin(),nums.end()) ;//step 1: Sort array

    int left=0 , sum=0, total=0,mxfreq=0;;
             //Step 2: Sliding window
    for(int right=0;right<nums.size();right++){
        sum +=nums[right];
        total=(right-left+1)*nums[right] ;

          //step 3: If total operation exceeds k -> shrink indow
        while(total -sum > k ){
            sum =sum-nums[left];
            left++ ;
        }
               // Step 4: Update Max frequency
        mxfreq=max(mxfreq, (right-left+1));
    }
    return mxfreq ;
}

int main(){

    int n ;cout<<"Enter array size : "; cin>>n;
    int k ;cout<<"Enter k(no. of operations ) : "; cin>>k;

    cout<<"Enter array elements : ";
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i] ;
    }

    cout<<"Maximum Frequency is : "<<maxFrequency(arr, k)<<endl ;
    return 0;
}