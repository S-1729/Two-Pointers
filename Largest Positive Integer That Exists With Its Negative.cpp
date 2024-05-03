class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans=INT_MIN;
        unordered_set<int>S;
        for(auto x:nums){
            if(S.find(-x)!=S.end())
                ans=max(ans,abs(x));
            S.insert(x);
        }
        return ans==INT_MIN?-1:ans;
    }
};

//Code-2 T.C : O(nlogn)
//       S.C : O(1)
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int i=0,j=nums.size()-1;
        while(i<j){
            if((-nums[i])==nums[j])
                return nums[j];
            else if(-nums[i]<nums[j])
                j--;
            else
                i++;
        }
        return -1;
    }
};

//Code-3 T.C : O(n)
//       S.C : O(1)
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int arr[2001]={0};
        int ans=-1;
        for(auto x:nums){
            if(arr[-x+1000]==1)
                ans=max(ans,abs(x));
            arr[x+1000]=1;
        }
        return ans;
    }
};

/*
    Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.
    Return the positive integer k. If there is no such integer, return -1.

    Example 1:
    Input: nums = [-1,2,-3,3]
    Output: 3
    Explanation: 3 is the only valid k we can find in the array.

    Example 2:
    Input: nums = [-1,10,6,7,-7,1]
    Output: 7
    Explanation: Both 1 and 7 have their corresponding negative values in the array. 7 has a larger value.

    Example 3:
    Input: nums = [-10,8,6,7,-2,-3]
    Output: -1
    Explanation: There is no a single valid k, we return -1.

    T.C : O(n)
    S.C : O(n)
*/
