class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};

/*
	Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
	Note that you must do this in-place without making a copy of the array.
	
	Input: nums = [0,1,0,3,12]
	Output: [1,3,12,0,0]
	
	T.C : O(n)
*/
