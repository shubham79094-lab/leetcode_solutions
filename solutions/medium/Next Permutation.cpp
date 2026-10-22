// Title: Next Permutation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/next-permutation/

            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n - 1;i>ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i] , nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
