class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,water=0,leftmax=0,rightmax=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]<=leftmax)
                    water+=(leftmax-height[l]);
                else
                    leftmax=height[l];
                l++;
            }
            else{
                if(height[r]<=rightmax)
                    water+=(rightmax-height[r]);
                else
                    rightmax=height[r];
                r--;
            }
        }
        return water;
    }
};

/*
	Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap between bars after raining.
	
	Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
	Output: 6
	
	T.C : O(n)
*/
