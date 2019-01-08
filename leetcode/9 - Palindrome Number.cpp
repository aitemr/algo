#include <iostream>

using namespace std;

bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        string str = to_string(x);
        
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

bool isPalindromeWithoutConverting(int x) {

    if (x < 0 || ( x != 0 && x % 10 == 0)) {
        return false;
    }

    int revertedNumber = 0;
    while(x > revertedNumber) {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
   }

    return x == revertedNumber || x == revertedNumber/10;
}

int main() {
    cout << isPalindromeWithoutConverting(12321) << endl;

    return 0;
}

