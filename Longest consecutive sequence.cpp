class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return 1;
        }
        set<int> s1(nums.begin(), nums.end());
        nums = vector<int>(s1.begin(), s1.end());
        int max = 0;
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == nums[i] + 1) {
                count++;
                if (count > max) {
                    max = count;
                }

            } else {
                count = 0;
            }
        }
        return max+1;
    }
};
