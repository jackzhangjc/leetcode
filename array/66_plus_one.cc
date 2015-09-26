class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;
        int i = digits.size() - 1;
        while (i >= 0 && c > 0){
            digits[i] += c;
            c = digits[i]/10;
            digits[i] = digits[i] % 10;
            i --;
        }
        if (i < 0 && c > 0){
            digits.insert(digits.begin(), 1);
        }
        return digits;
        
    }
};