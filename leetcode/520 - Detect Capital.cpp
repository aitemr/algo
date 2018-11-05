class Solution {
public:
    bool detectCapitalUse(string word) {
    int upperCount = 0;
    int lowerCount = 0;
    
    for (int i = 0; i < word.length(); i++) {
        if ((word[i] >= 'A' && word[i] <= 'Z')) {
            upperCount++;
        } else if ((word[i] >= 'a' && word[i] <= 'z')) {
            lowerCount++;
        }
    }

    return (upperCount == word.length()) ||
           (lowerCount == word.length()) ||
           ((lowerCount + 1 == word.length())
           && (word[0] >= 'A' && word[0] <= 'Z'));
    }
};