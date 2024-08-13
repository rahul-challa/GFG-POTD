class Solution:
    def floorSqrt(self, n): 
        i = 1
        while i * i <= n:
            if i * i >= n:
                break
            i += 1
        if i * i == n:
            return i
        else:
            return i - 1