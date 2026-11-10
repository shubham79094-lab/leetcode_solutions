// Title: 4Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/4sum/

        vector<vector<int>> fsum;

        for (int i = 0; i < n - 3; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;
