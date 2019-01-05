#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int convertString(const char *s) {
    int i = 0;
    while(*s >= '0' && *s <= '9') {
        i = i * 10 + (*s - '0');
        s++;
    }

    return i;
}

int reverse(int x) {
    string str = to_string(x > 0 ? x : -x);
    string reversedString = "";


    cout << "str " << str << endl;

    for (int i = str.length() - 1; i >= 0;  i--) {
        cout << "str[i] " << str[i] << endl;
        reversedString += str[i];
    }

    cout << "reversedString " << reversedString << endl;

    return x > 0 ? stol(reversedString) : -stol(reversedString);
}

int main() {
    cout << reverse(-16700900);

    return 0;
}
