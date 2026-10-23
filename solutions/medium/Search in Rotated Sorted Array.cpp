// Title: Search in Rotated Sorted Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/search-in-rotated-sorted-array/

            if (nums[mid] == target) {
                return mid;
            }

            // Left half is sorted
            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && 
                target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && 
