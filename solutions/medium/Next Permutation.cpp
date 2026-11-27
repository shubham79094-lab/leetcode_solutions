// Title: Next Permutation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--){
