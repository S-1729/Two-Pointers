class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int low=j+1,high=n-1;
                long long currTarget=(long long)target-(long long)nums[i]-(long long)nums[j];
                while(low<high){
                    long long sum=(long long)nums[low]+(long long)nums[high];
                    if(sum==currTarget){
                        v.push_back({nums[i],nums[j],nums[low],nums[high]});
                        while(low<high && nums[low]==nums[low+1])
                        low++;
                        while(low<high && nums[high]==nums[high-1])
                        high--;

                        low++;
                        high--;
                    }
                    else if(sum<currTarget)
                    low++;
                    else
                    high--;
                }
                while(j+1<n && nums[j]==nums[j+1])
                j++;
            }
            while(i+1<n && nums[i]==nums[i+1])
            i++;
        }
        return v;
    }
};

/*
	Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
	0 <= a, b, c, d < n
	a, b, c, and d are distinct.
	nums[a] + nums[b] + nums[c] + nums[d] == target
	You may return the answer in any order.
	
	Input: nums = [1,0,-1,0,-2,2], target = 0
	Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
	
	Input: nums = [2,2,2,2,2], target = 8
	Output: [[2,2,2,2]]
	
	T.C : O(n*n*n)
*/
