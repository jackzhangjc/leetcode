#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string s = "";
     int k = 0;
      bool tf = true;
       if (strs.size() == 0) {
                return "";
                 }
        
        while (tf) {
                 if (k+1 > strs[0].length()) {
                              break;
                                   }
                      char c = strs[0][k];  
                           for (int i = 1; i < strs.size(); i++){
                                        if ((strs[i].length() < k+1) || (strs[i][k] != c)) {
                                                         tf = false;
                                                                  }
                                                 
                                             }
                                if (tf) {
                                             s = s + c;
                                                      k++;
                                                           }
                                 }
         
         return s;
          }   
}


