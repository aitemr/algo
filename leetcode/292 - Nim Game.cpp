class Solution {
public:
    bool canWinNim(int n) {
        return (n % 4 != 0) ? true : false;
    }
};