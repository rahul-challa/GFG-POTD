class Solution:
    
    #Function to return max value that can be put in knapsack of capacity W.
    def get_ans(self, w, idx, wt, val):
        if idx < 0 or w == 0:
            return 0
        if w < wt[idx]:
            return self.get_ans(w, idx - 1, wt, val)
        return max(val[idx] + self.get_ans(w - wt[idx], idx - 1, wt, val), self.get_ans(w, idx - 1, wt, val))
    
    def knapSack(self,W, wt, val):
        n = len(wt)
        return self.get_ans(W, n - 1, wt, val)
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        # n = int(input())
        W = int(input())
        val = list(map(int, input().strip().split()))
        wt = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.knapSack(W, wt, val))

# } Driver Code Ends