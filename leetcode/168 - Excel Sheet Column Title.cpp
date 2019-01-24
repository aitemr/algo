// Given a positive integer, return its corresponding column title as appear in an Excel sheet.

// For example:

//     1 -> A
//     2 -> B
//     3 -> C
//     ...
//     26 -> Z
//     27 -> AA
//     28 -> AB 
//     ...
// Example 1:

// Input: 1
// Output: "A"
// Example 2:

// Input: 28
// Output: "AB"
// Example 3:

// Input: 701
// Output: "ZY"

// Formula 
//   A       B             Z
// 1+26*0, 2+26*0, ..., 26+26*0
//   AA      AB            AZ
// 1+26*1, 2+26*1, ..., 26+26*1
//   BA      BB            BZ
// 1+26*2, 2+26*2, ..., 26+26*2

class Solution {
public:
    string convertToTitle(int n) {
        string map = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result;

        while(n) {
            result = map[(n-1) % 26] + result;
            n = (n-1) / 26;
        }

        return result;   
    }
};
