class Solution {
public:
   map<int, unsigned int> counter(const vector<int>& vals) {
        map<int, unsigned int> rv;

        for (auto val = vals.begin(); val != vals.end(); ++val) {
            rv[*val]++;
        }

        return rv;
    }

    int majorityElement(vector<int>& nums) {
        map<int, unsigned int> counts = counter(nums);

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
};