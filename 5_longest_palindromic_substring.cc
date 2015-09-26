#t include <iostream>
#include <string>

using namespace std;

string longestPalindrome(string s) {
    if (s == ""){
        return "";
    }
    
    int f [1000][1000] = {};
    int max = 1; 
    f[0][0] = 1;
    string str = s.substr(0,1);
    for (int i = 1; i < s.length(); i++ ){
        for (int j = 0; j <= i; j++) {
            if (s[i] == s[j]){
               if ((f[j+1][i-1] == 1) || ((j+1) >=  i)){
                f[j][i] = 1;
                if ((i - j + 1) > max) {
                    max = i - j + 1;
                    str = s.substr(j, i - j + 1);
                }
               }
            }
        }
    }
    return str;
                
}

int main(){
    cout << longestPalindrome("bb") << endl;
    return 0;

}
