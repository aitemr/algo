class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();

        if (length == 0 || length == 1) {
            return length;
        }

        int j = 0;
        for (int i = 0; i < length - 1; i++) {
            if (nums[i] != nums[i+1]) {
                nums[j++] = nums[i];
            }
        }

        nums[j++] = nums[length - 1];

        return j; 
    }
};