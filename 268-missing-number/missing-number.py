class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        expected_sum = 0
        actual_sum = 0
        for i in range( 0 , n + 1):
            expected_sum += i
        for num in nums:
            actual_sum  += num
        return expected_sum - actual_sum

    
    


    
            
                                   
       