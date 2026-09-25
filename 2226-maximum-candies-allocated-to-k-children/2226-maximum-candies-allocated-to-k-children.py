class Solution:
    def maximumCandies(self, candies: list[int], k: int) -> int:
        i = 0
        j = max(candies) # Fixed: Changed A to candies
        
        while i < j:
            # Fixed: Changed k to mid to avoid overriding the function parameter 'k'
            mid = (i + j + 1) // 2 
            
            # Fixed: Changed A to candies and k to mid
            take = sum(x // mid for x in candies) 
            
            # Fixed: Changed T to k
            if k <= take: 
                i = mid
            else:
                j = mid - 1
                
        return i