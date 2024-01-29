class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>v;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int low=i+1,high=n-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    v.push_back({nums[i],nums[low],nums[high]});
                    while(low<high && nums[low]==nums[low+1])
                    low++;
                    while(low<high && nums[high]==nums[high-1])
                    high--;
                    
                    low++,high--;
                }
                else if(sum<0)
                    low++;
                else
                    high--;
            }
        }
        return v;
    }
};

/*
	Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
	Notice that the solution set must not contain duplicate triplets.
	
	Input: nums = [-1,0,1,2,-1,-4]
	Output: [[-1,-1,2],[-1,0,1]]
	Explanation: 
	nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
	nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
	nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
	The distinct triplets are [-1,0,1] and [-1,-1,2].
	Notice that the order of the output and the order of the triplets does not matter.
	
	T.C : O(n*n)
*/
