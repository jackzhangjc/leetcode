#include<vector>
#include<iostream>
using namespace std;

  void reverseWords(string &s) {
        
        vector<string> result;
        while (s.find(' ')!= -1){
            int i = s.find(' ');
            //cout<< i <<endl;    
            result.push_back(s.substr(0,i));
            s.erase(0,i+1);
        }
        if (s != ""){ 
            result.push_back(s);
        }
        
        //reverse(result.begin(), result.end());
        //cout<< result.size() <<endl;
        s="";
        for (int i=result.size()-1; i > 0 ; i--){
            s = s + result[i] + ' ';
        }
        if (result.size() > 0 ) {
            s = s + result[0];
        }
    }

int main(){
    string s;
    getline(cin,s);
     reverseWords(s);    
    cout<< s <<endl;
}
