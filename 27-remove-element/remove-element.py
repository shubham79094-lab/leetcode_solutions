class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        # k keeps track of where to place the next non-val element
        k = 0
        
        # Iterate through the array
        for i in range(len(nums)):
            # If the current element is not the value we want to remove
            if nums[i] != val:
                # Place it at index k and increment k
                nums[k] = nums[i]
                k += 1
                
        # k is now the length of the new array
        return k
