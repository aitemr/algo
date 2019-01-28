// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];

        for (int i = 0; i < strs[0].size(); i++) {
            int count = 0;
            char s = strs[0][i];
            while (count < strs.size()){
                if (s == strs[count][i]) count ++;
                else return strs[0].substr(0, i);
            }
        }

        return strs[0].substr(0, strs[0].size());
    }
};