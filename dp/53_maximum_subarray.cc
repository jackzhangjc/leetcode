class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sol =  INT_MIN;
        int current = 0;
        for (int i = 0; i < nums.size(); i++){
            current = max(current + nums[i], nums[i]);
            if (current > sol) {
                sol = current;
            }
        }
        return sol;
    }
};