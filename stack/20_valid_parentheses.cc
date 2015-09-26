class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        map<char, char> b;
        b[')'] = '(';
        b[']'] = '[';
        b['}'] = '{';
        
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') a.push(s[i]);
                else if (a.empty() || b[s[i]] != a.top()) return false;
                else a.pop();
        }
        
        if (!a.empty()) return false;
        return true;
    }
};