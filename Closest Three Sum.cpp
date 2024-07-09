class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        sort(begin(arr),end(arr));
        int minDiff=INT_MAX,n=arr.size(),ans;
        for(int i=0;i<n-2;i++){
            int low=i+1,high=n-1;
            while(low<high){
                int sum=arr[i]+arr[low]+arr[high];
                if(sum==target)
                    return target;
                else if(sum<target)
                    low++;
                else
                    high--;
                if(abs(target-sum)<minDiff){
                    minDiff=abs(target-sum);
                    ans=sum;
                }
                else if(abs(target-sum)==minDiff)
                    ans=max(ans,sum);
            }
            while(i+1<n && arr[i]==arr[i+1])
                i++;
        }
        return ans;
    }
};

/*
    Given an array, arr of integers, and another number target, find three integers in the array such that their sum is closest to the target. Return the sum of the three integers.  
    Note: If there are multiple solutions, return the maximum one.
  
    Examples :
    
    Input: arr[] = [-7, 9, 8, 3, 1, 1], target = 2
    Output: 2
    Explanation: There is only one triplet present in the array where elements are -7,8,1 whose sum is 2.
    
    Input: arr[] = [5, 2, 7, 5], target = 13
    Output: 14
    Explanation: There is one triplet with sum 12 and other with sum 14 in the array. Triplet elements are 5, 2, 5 and 2, 7, 5 respectively. Since abs(13-12) ==abs(13-14) maximum triplet sum will be preferred i.e 14.

    T.C : O(n*n)
*/
