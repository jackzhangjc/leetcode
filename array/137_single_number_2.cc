class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        vector<int> bit(sizeof(int)*8,0);
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < sizeof(int)*8; j++){
                bit[j] += nums[i] >> j & 1;
            }
        }
        
        for (int i = 0; i < nums.size(); i++){
            bit[i] = bit[i] % 3;
            result = result + bit[i] << i;
            
        }
        return result;
        
    }
};