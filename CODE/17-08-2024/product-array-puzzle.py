class Solution:
    def productExceptSelf(self, nums):
        #code here
            n = len(nums)
            if n == 1:
                return [1]
    
            # Allocate memory for temporary arrays left and right
            left = [0] * n
            right = [0] * n
    
            # Allocate memory for the product array
            prod = [0] * n
    
            # Left most element of left array is always 1
            left[0] = 1
    
            # Right most element of right array is always 1
            right[n - 1] = 1
    
            # Construct the left array
            for i in range(1, n):
                left[i] = nums[i - 1] * left[i - 1]
    
            # Construct the right array
            for j in range(n - 2, -1, -1):
                right[j] = nums[j + 1] * right[j + 1]
    
            # Construct the product array using left and right
            for i in range(n):
                prod[i] = left[i] * right[i]
    
            return prod
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]

        ans = Solution().productExceptSelf(arr)
        print(*ans)

# } Driver Code Ends