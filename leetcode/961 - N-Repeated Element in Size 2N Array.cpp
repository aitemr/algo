// In a array A of size 2N, there are N+1 unique elements, 
// and exactly one of these elements is repeated N times.

// Return the element repeated N times.

// Example 1:

// Input: [1,2,3,3]
// Output: 3
// Example 2:

// Input: [2,1,2,5,3,2]
// Output: 2
// Example 3:

// Input: [5,1,5,2,5,3,5,4]
// Output: 5

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int repeatedNTimes(vector<int>& A) {
    map<int, int> map;
    for (int i = 0; i < A.size(); i++) {
        map[A[i]]++;
        if (map[A[i]] > 1) return A[i];
    }

    return -1;
}

int main() {
    vector<int>nums = {1,2,3,3};
    cout << repeatedNTimes(nums) << endl;

    return 0;
}