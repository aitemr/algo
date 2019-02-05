// Given an integer, write a function to determine if it is a power of two.

// Example 1:

// Input: 1
// Output: true 
// Explanation: 20 = 1
// Example 2:

// Input: 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: 218
// Output: false

class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n > 1) {
        if(n % 2 == 1)
            return false;
            n/=2;
        }
        
        return n == 1;
    }
};
