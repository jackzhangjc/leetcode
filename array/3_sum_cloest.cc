class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = 0;
        if (nums.size() < 3) return result;
        result = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++){
            int j = i + 1;
            int k = nums.size() - 1;
            int t = 0;
            while (j < k){
                t = nums[i] + nums[j] + nums[k];
                if (abs(t - target) < abs(result - target)){
                    result = t;
                    /*j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while (j < k && nums[k] == nums[k+1]) k--;*/
                } 
                if (t > target){
                    k --;
                } else {
                    j++;
                }
            }

                while ((i < nums.size() - 1) && (nums[i+1] == nums[i])) i++;
        }
        return result;
    }
};