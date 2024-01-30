class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,maxm=0;
        while(i<j){
            int currArea=min(height[i],height[j])*(j-i);
            maxm=max(currArea,maxm);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxm;
    }
};

/*
	You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
	Find two lines that together with the x-axis form a container, such that the container contains the most water.
	Return the maximum amount of water a container can store.
	Notice that you may not slant the container.
	
	
	Input: height = [1,8,6,2,5,4,8,3,7]
	Output: 49
	
	
	T.C : O(n)
*/
