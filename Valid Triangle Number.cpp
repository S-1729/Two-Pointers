class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=2;i--){
            int left=0,right=i-1;
            while(left<right){
                if(nums[left]+nums[right]>nums[i]){
                    ans+= (right-left);
                    right--;
                }
                else
                    left++;
            }
        }
        return ans;
    }
};



/*
	Valid Triangle Condition : a+b>c
	
	Given an integer array nums, return the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.
	
	Input: nums = [2,2,3,4]
	Output: 3
	Explanation: Valid combinations are: 
	2,3,4 (using the first 2)
	2,3,4 (using the second 2)
	2,2,3
	
	T.C : O(n*n)
*/
