class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[k]);
                k++;
            }
        }
        return nums;
    }
};

/*
	Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
	Return any array that satisfies this condition.
	
	Input: nums = [3,1,2,4]
	Output: [2,4,3,1]
	Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
	
	T.C : O(n)
*/
