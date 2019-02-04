// Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

// Note:

// The length of both num1 and num2 is < 5100.
// Both num1 and num2 contains only digits 0-9.
// Both num1 and num2 does not contain any leading zero.
// You must not use any built-in BigInteger library or convert the inputs to integer directly.

class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum = 0, i = num1.length() - 1, j = num2.length() - 1;
        string str;
        
        while (i >= 0 || j >= 0 || sum > 0) {
            if (i >= 0) sum += (num1[i--] - '0');
            if (j >= 0) sum += (num2[j--] - '0');
            str.insert(0, 1, (sum % 10) + '0');
            sum /= 10;
        }
        
        return str;
    }
};