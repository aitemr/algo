// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a character sequence consists of non-space characters only.

// Example:

// Input: "Hello World"
// Output: 5

class Solution {
public:
    int lengthOfLastWord(string s) {
        const char *input = s.c_str();
        int result = 0;
        int last_result = 0;

        while (*input != '\0') {
            if (*input != ' ') {
                result++;
            } else if (result) {
                last_result = result;
                result = 0;
            }
            input++;
        }
        
        return result ? result : last_result;
    }
};