class Solution {
public:
    string convertToBase7(int num) {
      int x = abs(num);
      string res;
      do res = to_string(x % 7) + res;
      while(x /= 7);
      return (num >= 0 ? "" : "-") + res;
    }
};