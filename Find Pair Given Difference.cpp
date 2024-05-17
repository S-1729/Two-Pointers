class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_set<int>S;
        for(auto ele:arr){
            if(S.find(ele-x)!=S.end() || S.find(x+ele)!=S.end())
            return 1;
            S.insert(ele);
        }
        return -1;
    }
};

/*
    Given an array arr[] of size n and an integer x, return 1 if there exists a pair of elements in the array whose absolute difference is x, otherwise, return -1.
    
    Example 1:
    Input:
    n = 6
    x = 78
    arr[] = {5, 20, 3, 2, 5, 80}
    Output:
    1
    Explanation:
    Pair (2, 80) have absolute difference of 78.
    
    Example 2:
    Input:
    n = 5
    x = 45
    arr[] = {90, 70, 20, 80, 50}
    Output:
    -1
    Explanation:
    There is no pair with absolute difference of 45.

    Example 3:
    Input:
    n = 7
    x = 8
    arr[] = {2, 5, 3, 4, 3, 3, 2}
    Output:
    -1
    Explanation:
    There is no pair with absolute difference of 8.

    T.C : O(n)
    S.C : O(n)
*/
