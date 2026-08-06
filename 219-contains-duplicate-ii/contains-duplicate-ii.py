class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        hash_sheet = set()
        n = len(nums)
        
        for i in range(n):
            if nums[i] in hash_sheet:
                return True
            hash_sheet.add(nums[i])
            if len(hash_sheet) > k:
                hash_sheet.remove(nums[i - k])
        return False