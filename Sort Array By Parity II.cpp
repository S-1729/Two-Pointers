class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,j=1,n=nums.size();
        while(i<n && j<n){
            while(i<n && nums[i]%2==0)
                i+=2;
            while(j<n && nums[j]%2==1)
                j+=2;
            if(i<n && j<n)
                swap(nums[i],nums[j]);
        }
        return nums;
    }
};

/*
	Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
	Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
	Return any answer array that satisfies this condition.
	
	Input: nums = [4,2,5,7]
	Output: [4,5,2,7]
	Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
	
	T.C : O(n)
*/
