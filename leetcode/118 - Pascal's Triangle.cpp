// Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it.

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > r;
        if (numRows <= 0) {
            return r;
        }

        vector<int> cur;
        cur.push_back(1);
        r.push_back(cur);

        for (int i = 0; i < numRows - 1; i++) {
            for (int j = cur.size() - 1; j > 0; j--) {
                cur[j] += cur[j - 1];
            }   

            cur.push_back(1);
            r.push_back(cur);
        }

        return r;  
    }
};
