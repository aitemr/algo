// Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

 

// Example 1:

// Input: "Hello"
// Output: "hello"
// Example 2:

// Input: "here"
// Output: "here"
// Example 3:

// Input: "LOVELY"
// Output: "lovely"

class Solution {
public:
    char easytolower(char in) {
      if(in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
      return in;
    }

    string toLowerCase(string str) {
        string result;
        for (int i = 0; i < str.length(); i++) {
            result += easytolower(str[i]);
        }

        return result;
    }
};