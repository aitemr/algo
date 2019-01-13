#include <map>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

map<int, unsigned int> countFrequency(const vector<int>& vals) {
    map<int, unsigned int> rv;

    for (auto val = vals.begin(); val != vals.end(); ++val) {
        rv[*val]++;
    }

    return rv;
}

int majorityElement(vector<int>& nums) {
    map<int, unsigned int> counts = countFrequency(nums);
    
    int currentMax = 0;
    int max = 0;
    for (auto count = counts.begin(); count != counts.end(); ++count) {
        if (count->second > currentMax) {
            max = count->first;
            currentMax = count->second;
        }
    }

    return max;
}

int main(int argc, char** argv) {
    vector<int> mem = {3,2,3};
    cout << majorityElement(mem) << endl;

    return 0;
}