class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>mp(begin(dictionary),end(dictionary));
        string ans="";
        int i=0,n=sentence.size();
        while(i<n){
            int j=i;
            while(j<n && sentence[j]!=' '){
                string sub=sentence.substr(i,j-i+1);
                if(mp.find(sub)!=mp.end()){
                    ans=ans+sub+' ';
                    break;
                }
                j++;
            }
            if(sentence[j]==' ' || j==n)
                ans=ans+sentence.substr(i,j-i)+' ';
            while(j<n && sentence[j]!=' ')
                j++;
            i=j+1;
        }
        ans.pop_back();
        return ans;
    }
};

/*

    In English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word derivative. 
    For example, when the root "help" is followed by the word "ful", we can form a derivative "helpful".
    Given a dictionary consisting of many roots and a sentence consisting of words separated by spaces, replace all the derivatives in the sentence with the root forming it. 
    If a derivative can be replaced by more than one root, replace it with the root that has the shortest length.
    Return the sentence after the replacement.
    
    Example 1:
    Input: dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"
    Output: "the cat was rat by the bat"
    
    Example 2:
    Input: dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs"
    Output: "a a b c"

    T.C : O(n)
    S.C : O(n)
*/
