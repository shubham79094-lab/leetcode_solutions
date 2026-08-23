class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        def costum_sort(n):
            return (count[n] , -n)
        nums.sort(key = costum_sort)
        return nums