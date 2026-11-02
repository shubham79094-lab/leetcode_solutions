// Title: Combination Sum II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/combination-sum-ii/

        vector<int> cur;
        backtrack(candidates, target, 0, cur, res);
        return res;
    }

private:
    void backtrack(vector<int>& c, int remain, int start,
                   vector<int>& cur, vector<vector<int>>& res) {
        if (remain == 0) {
            res.push_back(cur);
            return;
        }
        for (int i = start; i < c.size(); i++) {
            if (i > start && c[i] == c[i - 1]) continue; // skip duplicates
            if (c[i] > remain) break;                    // prune
            cur.push_back(c[i]);
        vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
public:
class Solution {
