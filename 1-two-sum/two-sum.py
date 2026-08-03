class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
         n = len(nums)
         for i in range(n):
            for j in range(i + 1, n):
                if nums[i] + nums[j] == target:
                    return[i,j]
          

def twoSum(self,list,target):
    n = len(nums)
    for i in range(n):
        for j in range(i + 1, n):
            if nums[i]+nums[j] == target:
                return[i,j]
    
    
            if nums[i]+nums[j] == target:
                return[i,j]
            



            
            
