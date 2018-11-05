class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int ans = 0;
      int cnt = 0;
      for (int n = 0; n < nums.size(); n++){
        if (nums[n] == 1) {
          cnt += 1;
          ans = (ans > cnt) ? ans : cnt;
        } else {
          cnt = 0;
        }
      }

      return ans;
    }
};