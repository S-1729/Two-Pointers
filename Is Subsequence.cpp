class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,n=s.size(),m=t.size();
        while(i<n && j<m){
            if(s[i]==t[j])
                i++,j++;
            else
                j++;
        }
        return i==n;
    }
};

/*
	Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
	A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. 
	(i.e., "ace" is a subsequence of "abcde" while "aec" is not).
	
	Input: s = "abc", t = "ahbgdc"
	Output: true
	
	Input: s = "axc", t = "ahbgdc"
	Output: false
	
	T.C : O(min(n,m))
*/
