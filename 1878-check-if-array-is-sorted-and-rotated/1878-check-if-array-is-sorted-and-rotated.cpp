class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drops = 0;

        for (int i = 0; i < n; i++) {
            // Check if there is a drop
            if (nums[i] > nums[(i + 1) % n]) {
                drops++;
            }

            // If more than one drop is found, return false
            if (drops > 1) {
                return false;
            }
        }

        return true;
    }
};