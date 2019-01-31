// Given two strings s and t, determine if they are isomorphic.

// Two strings are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        
        unordered_map<char, char> data;
        unordered_set<char> data2;
        for (int i = 0; i < s.size(); ++ i) {
            if (data.find(s[i]) == data.end()) {
                if (data2.count(t[i])) { 
                    return false;
                }
                
                data[s[i]] = t[i];
                data2.insert(t[i]);
            }
            
            if (data[s[i]] != t[i]) return false;
        }
        
        return true;
    }
};