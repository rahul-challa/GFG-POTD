#User function Template for python3

class Solution:
    def Maximize(self, arr): 
        # Complete the function
        array = arr.sort()
        res = 0
        e = 7 + 1000000000
        for i in range(len(arr)):
            res += arr[i]*i
        
        return (res%e)



#{ 
# Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        A = list(map(int, input().strip().split()))
        # k = int(input())
        ob = Solution()
        print(ob.Maximize(A))