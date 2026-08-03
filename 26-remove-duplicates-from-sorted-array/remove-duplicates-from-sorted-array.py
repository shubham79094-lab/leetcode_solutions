class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        if not nums:
            return 0
            
        # slow pointer indicates the index of the last unique element found
        slow = 0
        
        # fast pointer scans the array starting from the second element
        for fast in range(1, len(nums)):
            # When we find a new unique element
            if nums[fast] != nums[slow]:
                slow += 1                  # Move slow pointer forward
                nums[slow] = nums[fast]    # Overwrite the next position with the new unique value
                
        # The number of unique elements is the index + 1
        return slow + 1
       

                
               
           
              

      

     
            
       
       

                
               
           
              

      

     
            
       
       

                
               
           
              

      

     
            
       