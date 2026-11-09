// Title: 3Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin() , nums.end());
