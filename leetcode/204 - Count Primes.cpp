// Count the number of prime numbers less than a non-negative number, n.

// Example:

// Input: 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

#include <iostream>

using namespace std;

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        bool prime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            count++;
        }
    }

    return count;
}

int main() {

    cout << countPrimes(10) << endl;

    return 0;
}