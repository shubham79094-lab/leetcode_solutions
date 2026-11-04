// Title: Permutations
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/permutations/

class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<int>& temp, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i] == true) {
                continue;
            }

            used[i] = true;
            temp.push_back(nums[i]);

            solve(nums, temp, used);
