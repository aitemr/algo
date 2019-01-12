class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target > nums[nums.size() - 1]) {
            return nums.size();  
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target ) {
                return i;
            } else if (nums[i] < target && nums[i+1] > target) {
                return i+1;
            } 
        }

        return 0;
    }
};