class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        if(n<m) return -1;
        int i=0,j=0,start=0;
        while(i<n && j<m){
            if(haystack[i]==needle[j])
                i++,j++;
            else{
                start++;
                i=start;
                j=0;
            }
        }
        return j==m?start:-1;
    }
};

/*
	Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
	
	Input: haystack = "sadbutsad", needle = "sad"
	Output: 0
	Explanation: "sad" occurs at index 0 and 6.
	The first occurrence is at index 0, so we return 0.
	
	Input: haystack = "leetcode", needle = "leeto"
	Output: -1
	Explanation: "leeto" did not occur in "leetcode", so we return -1.
	
	T.C : O(n*m)
*/
