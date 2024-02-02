//Code-1

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.size(),length=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
            length=max(length,j-i+1);
            j++;
        }
        return length;
    }
};


//Code-2

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.size(),length=0;
        unordered_set<int>Set;
        while(j<n){
            if(Set.find(s[j])==Set.end()){
                Set.insert(s[j]);
                length=max(length,j-i+1);
                j++;
            }
            else{
                Set.erase(s[i]);
                i++;
            }
        }
        return length;
    }
};
/*
	Given a string s, find the length of the longest substring without repeating characters.
	
	Input: s = "abcabcbb"
	Output: 3
	Explanation: The answer is "abc", with the length of 3.
	
	Input: s = "bbbbb"
	Output: 1
	Explanation: The answer is "b", with the length of 1.
	
	T.C : O(n)
	S.C : O(26)
*/
