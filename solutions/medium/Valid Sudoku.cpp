// Title: Valid Sudoku
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/valid-sudoku/


                int num = board[i][j] - '1';       // map 
                '1'-'9' to 0-8
                int b = (i / 3) * 3 + (j / 3);     // box index 
                0-8

                if (row[i][num] || col[j][num] || box[b][num])
                    return false;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

        for (int i = 0; i < 9; i++) {
        bool row[9][9] = {}, col[9][9] = {}, box[9][9] = {};

                row[i][num] = col[j][num] = box[b][num] = true;
            }
