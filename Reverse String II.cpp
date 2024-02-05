class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0,n=s.size();
        int j=min(n,i+k);
        while(i< n){
            reverse(s.begin()+i,s.begin()+j);
            i=i+2*k;
            j=min(n,i+k);
        }
        return s;
    }
};

/*
	Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
	If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.
	
	Input: s = "abcdefg", k = 2
	Output: "bacdfeg"
	
	Input: s = "abcde", k = 8
	Output: "edcba"
	
	T.C : O(n)
*/
