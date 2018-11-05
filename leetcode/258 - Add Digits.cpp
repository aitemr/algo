class Solution {
public:
    int addDigits(int num) {
      return num == 0 ? 0 : (num - 1) % 9 + 1;
    }
};