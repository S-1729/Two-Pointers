class Solution {
public:
    int merge(vector<int>& nums,int low,int mid,int high)
    {
        int c=0,j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i]>2LL*nums[j])
                j++;
            c+=(j-(mid+1));
        }
        
        vector<int>temp;
        int left=low,right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }
        
        while(left<=mid)
            temp.push_back(nums[left++]);
        while(right<=high)
            temp.push_back(nums[right++]);
        
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return c;
        
    }
    
    int mergeSort(vector<int>& nums,int low,int high)
    {
        if(low>=high)
            return 0;
        int mid=(low+high)/2;
        int count=mergeSort(nums,low,mid);
        count+=mergeSort(nums,mid+1,high);
        count+=merge(nums,low,mid,high);
        return count;
    }
    
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};

/*
	Given an integer array nums, return the number of reverse pairs in the array.
	A reverse pair is a pair (i, j) where:
	0 <= i < j < nums.length and
	nums[i] > 2 * nums[j].
	
	Input: nums = [1,3,2,3,1]
	Output: 2
	Explanation: The reverse pairs are:
	(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
	(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1
	
	T.C : O(nlogn)+O(n)+O(n)
	S.C : O(n)
*/
