class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>Set={'a','e','i','o','u','A','E','I','O','U'};
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            while(i<j && Set.find(s[i])==Set.end())
                i++;
            while(i<j && Set.find(s[j])==Set.end())
                j--;
            if(i<j)
                swap(s[i],s[j]);
            i++,j--;
            
        }
        return s;
    }
};

/*
	Given a string s, reverse only all the vowels in the string and return it.
	The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
	
	Input: s = "leetcode"
	Output: "leotcede"
	
	T.C :O(n)
*/
