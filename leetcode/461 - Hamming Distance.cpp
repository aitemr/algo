class Solution {
public:
    int hammingDistance(int x, int y) {
      int distinctValue = 0;
      int value = x^y;
      while(value) {
        value &= (value - 1);
        distinctValue++;
      }
      return distinctValue;
    }
};
