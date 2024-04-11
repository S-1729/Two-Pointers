class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int>v;
        while(i<=j){
            int left=nums[i]*nums[i];
            int right=nums[j]*nums[j];
            if(left>right){
                v.push_back(left);
                i++;
            }
            else{
                v.push_back(right);
                j--;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

/*
	Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
	
	Input: nums = [-4,-1,0,3,10]
	Output: [0,1,9,16,100]
	Explanation: After squaring, the array becomes [16,1,0,9,100].
	After sorting, it becomes [0,1,9,16,100].
	
	T.C : O(n)
	S.C : O(n)
*/	
	
