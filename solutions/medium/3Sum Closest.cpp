// Title: 3Sum Closest
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];
        sort(nums.begin() , nums.end());
