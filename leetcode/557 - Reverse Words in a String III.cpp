class Solution {
public:
    string reverseWords(string s) {
      char *cstr = &s[0u];
        string output = "";
      char *p = strtok(cstr, " ");
      while (p) {
          stringstream ss;
          string s;
          ss << p ;
          ss >> s;
          p = strtok(NULL, " ");
          if (output == "") output += reverseString(s);
          else output += " " + reverseString(s);
      }
      return output;
    }
    
    string reverseString(string str) {
        int n = str.length();
        for (int i=0; i < n / 2; i++) {
          swap(str[i], str[n-i-1]);
        }
        return str;
    }
};