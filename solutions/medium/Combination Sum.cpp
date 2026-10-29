// Title: Combination Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void backtrack(vector<int>& candidates, int target,
                   int start, vector<int>& path,
                   vector<vector<int>>& ans) {

        if (target == 0) {
