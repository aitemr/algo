// Given an array of integers, find the sum of its elements.
// For example, if the array , , so return .
// Function Description
// Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.
// simpleArraySum has the following parameter(s):
// ar: an array of integers
// Input Format
// The first line contains an integer, , denoting the size of the array. 
// The second line contains  space-separated integers representing the array's elements.
// Constraints

// Output Format
// Print the sum of the array's elements as a single integer.
// Sample Input
// 6
// 1 2 3 4 10 11
// Sample Output
// 31

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for (int i = 0; i< ar.size(); i++) {
        sum += ar[i];
    }

    return sum;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);

    vector<int> ar(ar_count);

    for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
        int ar_item = stoi(ar_temp[ar_itr]);

        ar[ar_itr] = ar_item;
    }

    int result = simpleArraySum(ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
