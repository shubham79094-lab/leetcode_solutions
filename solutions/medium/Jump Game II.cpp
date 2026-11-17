// Title: Jump Game II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int j = 0, curend = 0, farthest = 0;
