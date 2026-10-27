// Title: Combination Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/combination-sum/

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
