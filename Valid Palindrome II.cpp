class Solution {
public:
    bool isPalindrome(string s,int i,int j)
    {
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++,j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j])
                return isPalindrome(s,i+1,j)||isPalindrome(s,i,j-1);
            i++,j--;
        }
        return true;
    }
};

/*
	Given a string s, return true if the s can be palindrome after deleting at most one character from it.
	
	Input: s = "abca"
	Output: true
	Explanation: You could delete the character 'c'.
	
	Input: s = "abc"
	Output: false
	
	T.C : O(n)
*/
