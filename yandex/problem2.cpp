#include <iostream>
#include <string>

using namespace std;

int getSize() {
    string s; cin >> s;
    int result = 0;
    string current_string = "";

    for(int i = 0; i < s.size(); i++) {
        if(!isdigit(s[i])) {
          current_string += s[i];
          break; 
        } 

        int length = (int)current_string.size();
        result += length - 1;
        current_string = "";
        int cur = (s[i] - '0');
        while(1) {
            ++i;
            if(i >= (int)s.size() || !isdigit(s[i])) break;
            cur *= 10;
            cur += (s[i] - '0');
        }
        --i;
        result += cur;
    }

    return result += (int)current_string.size();
}

int main(){
    cout << getSize();

    return 0;
}