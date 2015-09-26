#include <iostream>
#include <map>

using namespace std;
int lengthOfLongestSubstring(string s) {
    int len = s.length();
    if (len == 0){
       return 0;
    } 
    map<char, int> m;
    int max = 0;
    int current = 0;
    for (int i = 0; i < len; i++){
        if (m.find(s[i]) == m.end()) {
            current ++;
            m[s[i]] = i;
        } else if ((i - m.at(s[i])) < current + 1){
            current = i - m.at(s[i]);
            m.at(s[i]) = i;
        } else {
            current ++;
            m[s[i]] = i;

        }
        if (current > max) {
            max = current;
        }
    }
    return max;        
}

int main() {
    cout<<lengthOfLongestSubstring("abcabcbb")<<endl;
     cout<<lengthOfLongestSubstring("bbb")<<endl;
 
    return 0;
}
