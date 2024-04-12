class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0,j=sqrt(c);
        while(i<=j){
            long long sum=(long long)i*i+(long long)j*j;
            if(sum==c)
                return true;
            else if(sum<c)
                i++;
            else
                j--;
        }
        return false;
    }
};

/*
	Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
	
	Input: c = 5
	Output: true
	Explanation: 1 * 1 + 2 * 2 = 5
	
	T.C : O(sqrt(n))
*/
