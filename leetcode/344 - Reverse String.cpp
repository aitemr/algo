class Solution {
public:
    string reverseString(string s) {
       int n = s.length();
       for (int i=0; i < n / 2; i++) {
          swap(s[i], s[n-i-1]);
        }

        return s;
    }
};