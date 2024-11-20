#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // Check each number from 0 to n
        for (int i = 0; i <= n; i++) {
            bool found = false;
            
            // Search for i in the array
            for (int num : nums) {
                if (num == i) {
                    found = true;
                    break;
                }
            }
            
            // If i is not found in the array, return it
            if (!found) {
                return i;
            }
        }
        
        return -1; // This line should never be reached
    }
};
