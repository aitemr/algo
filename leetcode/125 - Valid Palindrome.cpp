// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Note: For the purpose of this problem, we define empty string as valid palindrome.

// Example 1:

// Input: "A man, a plan, a canal: Panama"
// Output: true
// Example 2:

// Input: "race a car"
// Output: false

#include <iostream>
#include <string>
#include <locale>

using namespace std;

bool isPalindrome(string s) {
    string str;
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            str += s[i];
        }   
    }

    for (auto & c: str) {
        c = tolower(c);
    }

    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
        return false;
        }

        i++;
        j--;
    }

    return true;
}

int main() {
    cout << isPalindrome("sdcasd");

    return 0;
}
