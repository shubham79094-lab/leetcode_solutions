// Title: Valid Sudoku
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {}, col[9][9] = {}, box[9][9] = {};

        for (int i = 0; i < 9; i++) {
