import random
class Solution:
    def partition(self, arr, k, low, high):
        if low > high: return 0
        if low == high: return arr[low]
        pivotIndex = self.quickSelect(arr, low, high)
        if pivotIndex + 1 == k:
            return arr[k - 1]
        if pivotIndex + 1 > k:
            return self.partition(arr, k, low, pivotIndex - 1)
        return self.partition(arr, k, pivotIndex + 1, high)
        
    def quickSelect(self, arr, low, high):
        index = random.randint(low, high)
        temp = arr[index]
        ptr = low
        for i in range(low, high + 1):
            if arr[i] < temp:
                arr[ptr], arr[i] = arr[i], arr[ptr]
                ptr += 1
                
        for i in range(low, high + 1):
            if arr[i] == temp:
                arr[ptr], arr[i] = arr[i], arr[ptr]
                break
        
        return ptr
            
        
    def kthSmallest(self, arr,k):
        return self.partition(arr, k, 0, len(arr) - 1)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    import random
    t = int(input())
    for tcs in range(t):
        # n = int(input())
        arr = list(map(int, input().strip().split()))
        k = int(input())
        ob = Solution()
        print(ob.kthSmallest(arr, k))

# } Driver Code Ends