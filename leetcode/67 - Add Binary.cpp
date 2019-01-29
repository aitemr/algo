// Given two binary strings, return their sum (also a binary string).

// The input strings are both non-empty and contains only characters 1 or 0.

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int counter = 0, i = a.size() - 1, j = b.size() - 1;

        while(i >= 0 || j >= 0 || counter == 1) {
            counter += i >= 0 ? a[i--] - '0' : 0;
            counter += j >= 0 ? b[j--] - '0' : 0;
            result = char(counter % 2 + '0') + result;
            counter /= 2;
        }
        
        return result;
    }
};