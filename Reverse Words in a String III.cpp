class Solution {
public:
    string reverseWords(string s) {
        int l=0,left,right;
        for(int r=0;r<s.size();r++){
            if(s[r]==' ' || r==s.size()-1){
                left=l,right=r-1;
                if(r==s.size()-1)
                    left=l,right=r;
                while(left<right){
                    swap(s[left],s[right]);
                    left++;
                    right--;
                }
                l=r+1;
                r=l;
            }
        }
        return s;
    }
};

/*
	Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
	
	Input: s = "Let's take LeetCode contest"
	Output: "s'teL ekat edoCteeL tsetnoc"
	
	T.C : O(n)
*/
